import re
from bs4 import BeautifulSoup

def parse_rgba(style_str):
    match = re.search(r'rgba\(\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)', style_str)
    if match:
        return int(match.group(1)), int(match.group(2)), int(match.group(3))
    return None

def rgba_to_truecolor_hex(r, g, b):
    if g > r and g > 150:
        return "#22c55e"
    elif r > g and r > 200 and g < 150:
        return "#ef4444"
    elif r > 120 and g > 120:
        return "#eab308"
    return "#64748b"

def sanitize_latex_text(text):
    text = text.replace('_', r'\_')
    text = text.replace('&', r'\&')
    text = text.replace('%', r'\%')
    text = text.replace('<', r'\lt ')
    text = text.replace('>', r'\gt ')
    return text

def html_to_latex_array(input_filename, output_filename):
    with open(input_filename, 'r', encoding='utf-8') as f:
        raw_html = f.read()

    soup = BeautifulSoup(raw_html, 'html.parser')
    container = soup.find('div', class_='container')

    output_markdown = []

    if container:

        h1 = container.find('h1')
        if h1:
            output_markdown.append(f"# {h1.get_text().strip()}")

        subtitle = container.find('div', class_='subtitle')
        if subtitle:
            output_markdown.append(f"{subtitle.get_text().strip()}")


        for elem in container.find_all(['h2', 'table'], recursive=False):
            if elem.name == 'h2':

                output_markdown.append(f"\n\n## {elem.get_text().strip()}\n\n")

            elif elem.name == 'table':

                headers = []
                for th in elem.find_all('th'):
                    vert_div = th.find('div', class_='vertical-text')
                    if vert_div:
                        title_text = vert_div.get_text().strip().title()
                        headers.append(title_text)
                    else:
                        headers.append(th.get_text().strip())


                array_format = "l|" + " | ".join(["c"] * (len(headers) - 1))


                output_markdown.append("$$")
                output_markdown.append(f"\\begin{{array}}{{{array_format}}}")
                escaped_headers = [f"\\textbf{{{sanitize_latex_text(h)}}}" for h in headers]
                output_markdown.append(" & ".join(escaped_headers) + " \\\\")
                output_markdown.append("\\hline")
                output_markdown.append("\\end{array}")
                output_markdown.append("$$\n")


                for tr in elem.find_all('tr'):
                    cells = tr.find_all('td')
                    if not cells:
                        continue

                    row_cells = []
                    for i, td in enumerate(cells):
                        style_attr = td.get('style', '')

                        if i == 0 or 'name-col' in td.get('class', []):
                            clean_name = sanitize_latex_text(td.get_text().strip())
                            row_cells.append(f"\\textbf{{{clean_name}}}")
                            continue

                        err_span = td.find('span', class_='err')
                        err_text = ""
                        if err_span:
                            err_text = err_span.get_text().replace('±', '').strip()
                            err_span.extract()

                        main_val = td.get_text().strip()

                        rgba = parse_rgba(style_attr)
                        hex_color = rgba_to_truecolor_hex(*rgba) if rgba else "#000000"

                        is_winner = 'border' in style_attr and ('#22c55e' in style_attr or '#16a34a' in style_attr or 'solid' in style_attr)
                        font_style = "\\mathbfsf" if is_winner else "\\textsf"
                        if is_winner:
                            hex_color = "#16a34a"

                        if err_text:
                            cell_latex = f"\\color{{{hex_color}}}{{{font_style}{{{main_val}}}}} \\space \\color{{#64748b}}{{\\pm \\textsf{{{err_text}}}}}"
                        else:
                            cell_latex = f"\\color{{{hex_color}}}{{{font_style}{{{main_val}}}}}"

                        row_cells.append(cell_latex)


                    row_latex = []
                    row_latex.append("$$")

                    row_latex.append(f"\\begin{{array}}{{{array_format}}}")
                    row_latex.append(" & ".join(row_cells) + " \\\\")
                    row_latex.append("\\hline")
                    row_latex.append("\\end{array}")
                    row_latex.append("$$")

                    output_markdown.append("\n".join(row_latex))


    with open(output_filename, 'w', encoding='utf-8') as f:
        f.write("\n".join(output_markdown))

    print(f"Done, into: {output_filename}")


html_to_latex_array('result.html', 'README.md')

