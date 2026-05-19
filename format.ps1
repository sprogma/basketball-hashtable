param($benchmarks)

# Verify files exist before running
foreach ($name in $benchmarks.Keys) {
    if (-not (Test-Path $benchmarks[$name])) {
        Write-Warning "File not found for [$name]: $($benchmarks[$name])"
    }
}

$allResults = @()
$totalTests = $benchmarks.Count
$currentTest = 0

Write-Host "Starting benchmarks..." -ForegroundColor Cyan

# 2. Run Benchmarks with Progress Bar
foreach ($name in $benchmarks.Keys) {
    $currentTest++
    $exePath = $benchmarks[$name]
    
    Write-Progress -Activity "Running Benchmarks" `
                   -Status "Executing: $name ($currentTest out of $totalTests)" `
                   -PercentComplete (($currentTest / $totalTests) * 100)
    
    if (Test-Path $exePath) {
        $output = &$exePath 2>$null
        $csvLines = $output | Where-Object { $_ -match '^stage;' -or $_ -match ';' }
        
        if ($csvLines) {
            $csvData = $csvLines -join "`n" | ConvertFrom-Csv -Delimiter ';'
            foreach ($row in $csvData) {
                $row | Add-Member -NotePropertyName "BenchmarkName" -NotePropertyValue $name
                $allResults += $row
            }
        } else {
            Write-Error "Test $name did not return a valid CSV payload."
        }
    }

    Write-Host " -> Completed $name..." -ForegroundColor Green
}

Write-Progress -Activity "Running Benchmarks" -Completed

if ($allResults.Count -eq 0) {
    Write-Error "No valid execution metrics captured. Exiting."
    exit
}

# Safely extract unique test stages and containers
$stages = $allResults | Select-Object -ExpandProperty stage -Unique
$containers = $benchmarks.Keys

Write-Host "Generating Logarithmic HTML Report with Total column & Winners..." -ForegroundColor Cyan

# Helper function for dynamic 3-color logarithmic heatmap (Green -> Yellow -> Red)
function Get-LogHeatmapColor {
    param (
        [double]$Value,
        [double]$Min,
        [double]$Max
    )
    if ($Min -eq $Max) { return "rgba(74, 222, 128, 0.25)" }
    
    $offset = 1.0
    if ($Min -le 0) { $offset = [Math]::Abs($Min) + 1.0 }
    
    $logVal = [Math]::Log($Value + $offset)
    $logMin = [Math]::Log($Min + $offset)
    $logMax = [Math]::Log($Max + $offset)
    
    $ratio = ($logVal - $logMin) / ($logMax - $logMin)
    
    if ($ratio -lt 0.5) {
        $subRatio = $ratio * 2.0
        $r = [Math]::Round(74 + (234 - 74) * $subRatio)
        $g = [Math]::Round(222 + (179 - 222) * $subRatio)
        $b = [Math]::Round(128 + (8 - 128) * $subRatio)
    } else {
        $subRatio = ($ratio - 0.5) * 2.0
        $r = [Math]::Round(234 + (248 - 234) * $subRatio)
        $g = [Math]::Round(179 + (113 - 179) * $subRatio)
        $b = [Math]::Round(8 + (113 - 8) * $subRatio)
    }
    
    return "rgba($r, $g, $b, 0.4)"
}

# Helper to build table matrix for a specific column data type
function Build-PerformanceTable {
    param (
        [string]$TypeKey,
        [string]$ErrKey
    )
    
    # Pre-calculate totals for each container to find the Total column winner
    $containerTotals = @{}
    $containerTotalErrors = @{}
    foreach ($container in $containers) {
        $containerRows = $allResults | Where-Object { $_.BenchmarkName -eq $container }
        $sumMean = 0.0
        $sumErrSq = 0.0
        foreach ($row in $containerRows) {
            $sumMean += [double]$row.$TypeKey
            $sumErrSq += [Math]::Pow([double]$row.$ErrKey, 2)
        }
        $containerTotals[$container] = $sumMean
        $containerTotalErrors[$container] = [Math]::Sqrt($sumErrSq)
    }
    
    # Find global absolute min total to style the final column winner
    $totalMin = ($containerTotals.Values | Measure-Object -Minimum).Minimum
    $totalMax = ($containerTotals.Values | Measure-Object -Maximum).Maximum
    
    # Build Table Header with Vertical Rotated Labels
    $html = "<table><thead><tr><th>Container / Map Type</th>"
    foreach ($stage in $stages) {
        $displayStage = $stage -replace '_', ' '
        $html += "<th><div class='vertical-text'>$displayStage</div></th>"
    }
    $html += "<th><div class='vertical-text' style='color: #1e3a8a; font-weight: bold;'>TOTAL TIME</div></th></tr></thead><tbody>"
    
    # Process Row by Row (Container by Container)
    foreach ($container in $containers) {
        $html += "<tr><td class='name-col'>$container</td>"
        
        foreach ($stage in $stages) {
            $match = $allResults | Where-Object { $_.BenchmarkName -eq $container -and $_.stage -eq $stage }
            
            # Find bounds across the entire current stage to relative color mapping & identify winner
            $allValuesForStage = $allResults | Where-Object { $_.stage -eq $stage } | ForEach-Object { [double]$_.$TypeKey }
            $stageMin = ($allValuesForStage | Measure-Object -Minimum).Minimum
            $stageMax = ($allValuesForStage | Measure-Object -Maximum).Maximum
            
            if ($match) {
                $val = [double]$match.$TypeKey
                $err = $match.$ErrKey
                $color = Get-LogHeatmapColor -Value $val -Min $stageMin -Max $stageMax
                
                # Check if this cell is the absolute winner of this specific stage column
                $winnerStyle = ""
                if ($val -eq $stageMin) {
                    $winnerStyle = "border: 3px solid #22c55e !important; font-weight: bold; font-size: 14px; color: #14532d;"
                }
                
                $html += "<td style='background-color: $color; $winnerStyle'>$val<span class='err'>±$err</span></td>"
            } else {
                $html += "<td>N/A</td>"
            }
        }
        
        # Build the final cumulative TOTAL cell for this container row
        $totVal = $containerTotals[$container]
        $totErr = [Math]::Round($containerTotalErrors[$container], 2)
        $totColor = Get-LogHeatmapColor -Value $totVal -Min $totalMin -Max $totalMax
        
        $totalWinnerStyle = ""
        if ($totVal -eq $totalMin) {
            $totalWinnerStyle = "border: 3px solid #16a34a !important; font-weight: 800; font-size: 15px; color: #14532d;"
        }
        
        $html += "<td style='background-color: $totColor; $totalWinnerStyle'>$totVal<span class='err' style='font-weight: normal;'>±$totErr</span></td>"
        $html += "</tr>"
    }
    $html += "</tbody></table>"
    return $html
}

# Generate layout structures independently
$intTable    = Build-PerformanceTable -TypeKey "int_mean"       -ErrKey "int_err"
$shortTable  = Build-PerformanceTable -TypeKey "short_str_mean" -ErrKey "short_str_err"
$longTable   = Build-PerformanceTable -TypeKey "long_str_mean"  -ErrKey "long_str_err"

# 3. Create Modern Dashboard Template
$htmlTemplate = @"
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Advanced Performance Evaluation Dashboard</title>
    <style>
        body { font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif; background-color: #f8fafc; color: #1e293b; margin: 40px; }
        .container { max-width: 1400px; margin: 0 auto; background: white; padding: 40px; border-radius: 12px; box-shadow: 0 4px 20px rgba(0,0,0,0.04); }
        h1 { color: #0f172a; margin-top: 0; font-size: 26px; font-weight: 700; text-align: center; margin-bottom: 5px; }
        .subtitle { text-align: center; color: #64748b; font-size: 14px; margin-bottom: 40px; }
        h2 { color: #1e3a8a; font-size: 18px; margin-top: 40px; margin-bottom: 15px; border-left: 4px solid #2563eb; padding-left: 12px; }
        
        table { width: 100%; border-collapse: separate; border-spacing: 0; margin-bottom: 30px; border: 1px solid #e2e8f0; border-radius: 6px; overflow: visible; table-layout: fixed; }
        th, td { padding: 10px 6px; text-align: center; border-bottom: 1px solid #e2e8f0; border-right: 1px solid #e2e8f0; font-size: 13px; box-sizing: border-box; }
        th { background-color: #f1f5f9; color: #475569; font-weight: 600; height: 150px; vertical-align: bottom; padding-bottom: 15px; }
        
        /* Rotated Vertical Header Styles */
        .vertical-text { transform: rotate(-90deg); transform-origin: left bottom; white-space: nowrap; width: 25px; margin-left: 24px; text-align: left; font-size: 11px; letter-spacing: 0.3px; text-transform: uppercase; }
        
        th:first-child, td:first-child { text-align: left; width: 22%; font-weight: 600; background-color: #ffffff; border-right: 2px solid #cbd5e1; }
        th:last-child, td:last-child { border-left: 2px solid #cbd5e1; width: 10%; }
        .name-col { color: #0f172a; }
        .err { color: #475569; font-size: 9px; margin-left: 3px; font-style: italic; display: block; opacity: 0.7; }
    </style>
</head>
<body>
    <div class="container">
        <h1>Hash Map Benchmark Suite</h1>
        <div class="subtitle">Execution speeds evaluated in milliseconds. Heatmaps use logarithmic distribution (Green = Fast, Yellow = Mid, Red = Slow). <strong>Green borders highlight the column winners.</strong></div>
        
        <h2>Dataset 1: Primitive Keys (int)</h2>
        $intTable

        <h2>Dataset 2: const char* (Short Strings)</h2>
        $shortTable

        <h2>Dataset 3: const char* (Long Strings)</h2>
        $longTable
    </div>
</body>
</html>
"@

# Output clean UTF-8 localized code block 
$htmlTemplate | Out-File -FilePath "result.html" -Encoding utf8

Write-Host "Done! Launching report..." -ForegroundColor Green
Invoke-Item "result.html"

