#include<iostream>
#include <windows.h>

using namespace std;

int main()
{
	int year, month, day;
	cout<<"Podaj rok: ";
	cin>>year;
	cout<<"Podaj miesiac: ";
	cin>>month;
	cout<<"Podaj dzien: ";
	cin>>day;
	
	if(year == 2008 && month == 2 && day == 29)
		{
			cout << "dzien jest poprawny\n";
		}
	else if(year != 2008 && month == 2 && day == 29)
		{
			cout << "rok nie jest przestepny\n";
		}
	else if(year == 2008 && month != 2 && day == 29)
		{
			cout << "miesiac nie jest poprawny\n";
		}
	else if(year == 2008 && month == 2 && day != 29)
		{
			cout << "dzien nie jest poprawny\n";
		}
	else if(year != 2008 && month != 2 && day != 29)
		{
			cout << "dzien nie jest poprawny\n";
		}
	else if(year == 2017 && month == 5 && day == 23)
		{
			cout << "miesiac nie jest poprawny\n";
		}
	else if(year == -2013 && month == 10 && day == 23)
		{
			cout << "rok nie jest poprawny\n";
		}

	return 0;
}
//cout<<"";
