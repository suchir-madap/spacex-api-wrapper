#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std; 
string satellite_id;
string data;
// SpaceX Starlink V4.0
int main() {
	cout << "Please type the Spacex Satellite Id Below\n";
	cin >> satellite_id; // input statement 628ea116a8973c1694df189b

	string merge = "curl https://api.spacexdata.com/v4/starlink/" + satellite_id + " >> src/starlink.json";
	// line above redirects and stores system command into the starlink.json file

	system(merge.c_str());// c_str converts the string into an array of characters
	//basic linux command will return the get command for a single satellite



}
