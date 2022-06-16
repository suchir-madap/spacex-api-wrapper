import requests
import json

# this function uses requests, allows user to type in a satellite id and then returns json value

def satellite_data(data_id):
    satellite = requests.get(
        f"https://api.spacexdata.com/v4/starlink/{str(data_id)}")
    store = satellite.json()
    wanted_values = ["CREATION_DATE", "OBJECT_NAME", "OBJECT_ID", "LAUNCH_DATE"]
    new_dict = dict(
        (x,y)
        for x,y in store['spaceTrack'].items() if x in wanted_values
    )
    store['spaceTrack'] = new_dict

    with open('data.json', 'w') as outfile:
        json.dump(store, outfile, indent= 1)

satellite_data('628ea116a8973c1694df189b')