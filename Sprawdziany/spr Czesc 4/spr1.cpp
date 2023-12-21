#include <iostream>

using namespace std;
int dol, gor; 
	int divide (int number){
		int sum = 1;
	for (int i = 2;  i <= number/2 ; i++)
	{
		if(number % i == 0)
		{
			sum+=i;
			}
		}
		return sum;
	}
int main()
{

	cout<<"podaj liczbe dolna: ";
	cin>>dol;
	cout<<"podaj liczbe gorna: ";
	cin>>gor;
	cout<<"liczby zaprzyjaznieone z przedzialu od"<< dol <<"do" << gor <<"to:\n";
	
	for(int a=dol; a <=gor; a++)
	{
		int b = divide(a);
		if (b > a && divide(b))
		{
			cout << a << " " << b << " ";
		}
	}
	cout << "koniec";
	return 0;
}

