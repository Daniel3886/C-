#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	system("chcp 1250");
	system("cls");
	
	float a, b, c, D, x1, x2;
	
	do{
	cout << "Podaj wartóœæ wspó³czynnika A: ";
	cin >> a;
	}while(a==0);
	
	cout << "Podaj wartóœæ wspó³czynnika B: ";
	cin >> b;
	cout << "Podaj wartóœæ wspó³czynnika C: ";
	cin >> c;
	
	D = b*b - 4*a*c;
	
	if(D>0)
	{
		x1 = (-1*b-sqrt(D))/2*a;
		x2 = (-1*b+sqrt(D))/2*a;
		cout << "to rownanie ma dwa dwa pierwiastki rzeczywiste: X1=" <<
			x1 << " oraz X2=" << x2 << endl; 
	}
	else if(D==0)
	{
		x1 = -1*b/2*a;
		cout << "to rownanie ma jedno rozwi¹zanie to: X1=" << x1 << endl;
	}
	else
	{
		cout << "to rownanie nie ma rozwi¹zañ" << endl;
	}
	cout << "Delta=" << D;
	
	
	
	
	return 0;	
}
