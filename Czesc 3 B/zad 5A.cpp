#include <iostream>

using namespace std;

int main()
{
	int N,K=0,d;

	cout<<"podaj N= ";
	cin>>N;
	while(N !=0)
	{
	d=N%10;
	N=N/10;
	K=K+d;
	}
	
	cout<<"wartosc K= "<< K;
	
	return 0;	
}
