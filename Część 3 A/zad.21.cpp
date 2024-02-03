#include <iostream>
#include <windows.h>
using namespace std;

int main()
 {
	float x,y;
 	int a;
	char c = 'a';
	
	while(c == 'a' || c == 'A')
	{
		cout<<"Podaj liczbe x:";
		cin>>x;
		if(x > -1 && x < 1)
		y = x*x;
	else
		y = 1;
	
	cout << "f(x)=" << y << endl;
	cout << "Jesli powtorzyc program wcisnij a w przeciwnym wypadku wcisnij dowolny klawisz literowy\n";
	cin >> c;
	}
	return 0;
}
