#include <iostream>

using namespace std;

int main()
{
	float x;
	char c = 't';
	
	while(c == 't' || c=='T')
	{
	do
	{
	cout << "\nDzien Dobry" << endl;
	cout << "bede powtarzal program, az do wczytania liczby z przedzialu <-3, 2)" << endl;
	
	cout << "Podaj liczbe x: ";
	cin >> x;
	} while(x < -3 || x > 2);
	
		cout << "\nJesli powtorzyc program wcisnij t\nw przeciwnym wypadku wcisnij dowolny klawisz literowy\n";
		cin >> c;
	}	
	
	return 0;
}
