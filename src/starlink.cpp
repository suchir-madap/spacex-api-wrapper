#include <iostream>
#include <string>
using namespace std; 
string satellite_id;

// SpaceX Starlink V4.0
int main() {
	cout << "Please type the Spacex Satellite Id Below\n";
	cin >> satellite_id; // input statement

	string merge = "curl https://api.spacexdata.com/v4/starlink/" + satellite_id;

    system(merge.c_str()); // c_str converts the string into an array of characters
	//basic linux command will return the get command for a single satellite
}
