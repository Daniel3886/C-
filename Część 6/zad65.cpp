#include <iostream>
#include <cmath> // dla potegi

using namespace std;

int suma(int x, int y) {
 return x + y;
}

int roznica(int x, int y) {
 return x - y;
}

int iloczyn(int x, int y) {
 return x * y;
}

int iloraz(int x, int y) {
 return x / y;
}

int potega(int x, int y) {
 return pow(x, y);
}


int main() {
	int a, b;
	cout<<"Podaj a: " << endl << "a = ";
	cin>>a;
	cout<<"Podaj b: " << endl << "b = ";
	cin>>b;
	
	cout<<"Suma:" << a << " + " << b << " = " << suma(a, b) << endl; 
	cout<<"Roznica:" << a << " - " << b << " = "<< roznica(a, b) << endl; 
	cout<<"Iloczyn:" << a << " * " << b << " = " << iloczyn(a, b) << endl; 
	cout<<"Iloraz:" << a << " / " << b << " = "<< iloraz(a, b) << endl; 
	cout<<"Potega:" << a << " do potegi " << " = " <<potega(a, b) << endl; 
	
	return 0;
}

