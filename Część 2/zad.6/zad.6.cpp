#include <iostream>

using namespace std;

int main(int argc, char** argv) 

{
	float const PI = 3.14159265;
	float rad_cze;
	cout << "Podaj wartoc radiantow: ";
	cin >> rad_cze;
	float deg_cze = rad_cze*180/PI;
	cout << rad_cze << " rad = " << deg_cze << " stopnie" << endl;
	return 0;
}
