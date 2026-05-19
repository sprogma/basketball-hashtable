param([switch]$NoStd)
$FLG = "-O3", "-mavx2", "-mbmi", "-mbmi2", "-Wno-microsoft-template"

$benchData = [ordered]@{
    "GNU pb_ds (gp)" = "g++ test.cpp -DTTT=gp_hash_table $FLG"
    "GNU pb_ds (cc)" = "g++ test.cpp -DTTT=cc_hash_table $FLG"
    "GNU stdlib" = "g++ test.cpp -DTTT=unordered_map $FLG"
    "MSVC stdlib" = "clang++ test.cpp -DTTT=unordered_map $FLG -std=gnu++2c"
    "ankerl" = "clang++ test.cpp -DTTT=ankerl::unordered_dense::map $FLG -std=gnu++2c"
    "phmap" = "clang++ test.cpp -DTTT=phmap::flat_hash_map $FLG -std=gnu++2c -D_SILENCE_CXX20_IS_ALWAYS_EQUAL_DEPRECATION_WARNING"
    "Basketball foolish" = "clang++ test.cpp -DTTT=basketball -DBASKET1 $FLG -std=gnu++2c"
    "Basketball mmap" = "clang++ test.cpp -DTTT=basketball -DBASKET2 $FLG -std=gnu++2c"
    "Basketball avx" = "clang++ test.cpp -DTTT=basketball -DBASKET3 $FLG -std=gnu++2c"
    "Basketball load=inf" = "clang++ test.cpp -DTTT=basketball -DBASKET4 $FLG -std=gnu++2c"
    "Basketball prefetch" = "clang++ test.cpp -DTTT=basketball -DBASKET5 $FLG -std=gnu++2c"
    "Basketball AOSOA" = "clang++ test.cpp -DTTT=basketball -DBASKET6 $FLG -std=gnu++2c"
    "Basketball After profiler" = "clang++ test.cpp -DTTT=basketball -DBASKET7 $FLG -std=gnu++2c"
    "Store Basket foolish" = "clang++ test.cpp -DTTT=basketball -DSTOREHASH -DBASKET1 $FLG -std=gnu++2c"
    "Store Basket mmap" = "clang++ test.cpp -DTTT=basketball -DSTOREHASH -DBASKET2 $FLG -std=gnu++2c"
    "Store Basket avx" = "clang++ test.cpp -DTTT=basketball -DSTOREHASH -DBASKET3 $FLG -std=gnu++2c"
    "Store Basket load=inf" = "clang++ test.cpp -DTTT=basketball -DSTOREHASH -DBASKET4 $FLG -std=gnu++2c"
    "Store Basket prefetch" = "clang++ test.cpp -DTTT=basketball -DSTOREHASH -DBASKET5 $FLG -std=gnu++2c"
    "Store Basket AOSOA" = "clang++ test.cpp -DTTT=basketball -DSTOREHASH -DBASKET6 $FLG -std=gnu++2c"
    "Store Basket After profiler" = "clang++ test.cpp -DTTT=basketball -DSTOREHASH -DBASKET7 $FLG -std=gnu++2c"
}
$benchmarks = [ordered]@{}

mkdir bin 2>$null 1>$null

$built = 0
$total = $benchData.Count
$benchData.Keys | % {
    Write-Progress -Activity "Building tests" `
                   -Status "Building: $_ ($($built+1)/$total)" `
                   -PercentComplete ([int](($built / $total) * 100))
    $e = "bin/$built.exe"
    iex ($benchData[$_] + " -o $e")
    Write-Host "Built $_" -Fore green
    $benchmarks[$_] = $e
    $built++
}
Write-Progress -Activity "Building tests" -Completed

.\format.ps1 $benchmarks
