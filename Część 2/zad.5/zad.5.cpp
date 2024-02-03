#include <iostream>

using namespace std;

int getValueFromUser()
{
	int x;
	cout << "Podaj liczbe: ";
	cin >> x;
	return x; 
	
}

int main(int argc, char** argv) {

	int a_czer = getValueFromUser();
	int b_czer = getValueFromUser();
	float iloraz=1.0*a_czer/b_czer;
	
	cout << "suma = " << a_czer+b_czer << endl;
	cout << "ró¿nica = " << a_czer-b_czer << endl;
	cout << "iloczyn = " << a_czer*b_czer << endl;
	cout << "iloraz = " << iloraz << endl;
	cout << "reszta z dzielenia = " << a_czer%b_czer << endl;
	 
	


	return 0;
}
