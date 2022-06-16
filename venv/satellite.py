import requests
import json

# this function uses requests, allows user to type in a satellite id and then returns json value

def satellite_data(data_id):
    satellite = requests.get(
        f"https://api.spacexdata.com/v4/starlink/{str(data_id)}")

    with open('data.json', 'w') as outfile:
        json.dump(satellite.json(), outfile)

satellite_data('628ea116a8973c1694df189b')