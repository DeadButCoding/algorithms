import requests
from bs4 import BeautifulSoup


def fetch_webpage(url):
    response = requests.get(url)
    return response.content


def extract_countries_data(html_content):
    soup = BeautifulSoup(html_content, 'html.parser')

    table = soup.find('table', {'class': 'sortable'})

    rows = table.find_all('tr')[2:]
    countries_data = {}

    for row in rows:
        columns = row.find_all(['th', 'td'])
        country_name = columns[1].text.strip()
        official_figure = int(columns[4].text.replace(',', '').strip())

        countries_data[country_name] = {'country_population': official_figure}

    return countries_data


def calculate_percentage(countries_data, total_population):
    for country, data in countries_data.items():
        population_percentage = (data['country_population'] / total_population) * 100
        data['country_population_percentage'] = round(population_percentage, 1)


def print_countries_data(countries_data):
    print("{")
    for country, data in countries_data.items():
        print(f"  '{country}': {data},")
    print("}")


if __name__ == "__main__":
    the_url = 'https://en.wikipedia.org/wiki/List_of_European_Union_member_states_by_population'

    the_html_content = fetch_webpage(the_url)

    the_countries_data = extract_countries_data(the_html_content)

    the_total_population = sum(data['country_population'] for data in the_countries_data.values())

    calculate_percentage(the_countries_data, the_total_population)

    print_countries_data(the_countries_data)