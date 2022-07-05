#include <iostream>
#include <string>
#include <cpr/cpr.h>
using namespace std; 
string satellite_id;


int main() { 
	cout << "Please type the Spacex Satellite Id Below\n";
	
	cin >> satellite_id; // input statement 628ea116a8973c1694df189b
	cout << satellite_id;
}

void satellite_data() {
	string merge = "https://api.spacexdata.com/v4/starlink/" + satellite_id;
	cpr::Response r = cpr::Get(cpr::Url{merge});
	cout << r.text;
	
}