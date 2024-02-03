#include <iostream>

using namespace std;

int main()
{
	int month_cze;
	cout<<"podaj liczbe twojego urodzenia: ";
	cin>>month_cze;
	
	for(month_cze%2==0; month_cze<=35; month_cze=month_cze+2)
	{
		cout<<month_cze<<endl;
	}
	return 0;
}
//    if (liczba%2==0) //dzielenie modulo

