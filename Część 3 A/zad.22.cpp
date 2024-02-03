#include<iostream>
using namespace std;

int main()
{
	char A, B,litera_1_D , litera_1_d, litera_2_D , litera_2_d ;
	
	litera_1_D = 'C';
	litera_1_d = 'c';
	litera_2_D = 'Z';
	litera_2_d = 'z';
	
	cout<<"Prosze podac pierwsza litere kodu:\n";
	cin>>A;
	cout<<"Prosze podac druga litere kodu:\n";
	cin>>B;
	cout<<"Podany kod to:"<< A << B <<endl;
		if((A == litera_1_D || A == litera_1_d) && (B == litera_2_D || B == litera_2_d))
	{
		cout<<"Dzien Dobry"<<endl;
	}
	else
	{
		cout<<"Zegnaj!"<<endl;
	}
	return 0;
}

