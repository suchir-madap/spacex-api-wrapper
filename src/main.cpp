#include <iostream>
#include <string>
using namespace std; 

// SpaceX Starlink V4.0
int main() {	 
    cout << system("curl https://api.spacexdata.com/v4/starlink/628ea116a8973c1694df189b"); 
	//basic linux command will return the get command for a single satellite
}
