#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	int A, option;
	char c = 't';
	while(c == 't' || c=='T')
	{
	
	cout<<"podaj opcje\n";
	cin>>option;
	cout<<"podaj dlugosc boku A w centymetrach: \n";
	cin>>A;
	cout<<"wczytane dane\n";
	cout<<"A="<<A<<"cm\n";
	cout<<"wyniki\n";
	
	int result1 = A*A;
	int result2 = A*4;
	
	switch(option) {
		case 1:
		cout<<"pole powierzchni kwadratu="<<result1<<"cm2\n";

	break;
		case 2:
	cout<<"obwod kwadratu= "<<result2<<"cm\n";

	break;
	}
	cout<<"jesli powtorzyc program wcisnij t lub T (tak)\n";
	cout<<"w przeciwnym przypadku wcisnij inny klawisz \n";
	cin>>c;
}
	return 0;
}
