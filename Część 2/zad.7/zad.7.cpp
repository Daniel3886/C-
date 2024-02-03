#include <iostream>

using namespace std;

int main(int argc, char** argv) 

{
		float const PI = 3.14159265;
	float deg_czer;
	cout << "Podaj wartosc stopni: ";
	cin >> deg_czer;
	float rad_czer = deg_czer*PI/180;
	cout << deg_czer << " stopnie = " << rad_czer << " rad" << endl;
	return 0;
}
	
	

