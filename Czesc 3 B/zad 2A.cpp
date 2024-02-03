#include<iostream>

using namespace std;

int main()
{
	int n,ile=1;
	cout<<"Podaj n= ";
	cin>>n;
	while(n != 1)
	{
		if(n%2!=0)
			n=3*n + 1;
			
			else
			n/=2;
			ile++;
		
	}
	cout<<"ile= "<< ile <<"\n"<<endl;
	cout<<"n= "<< n <<endl;
	return 0;
}

