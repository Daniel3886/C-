#include <iostream>

using namespace std;

int main()
{
	int liczba_liter;
	cout<<"Podaj liczbe liter twojego imienia:";
	cin>>liczba_liter;
	int Od = liczba_liter % 4 + 1;
	int koniec = Od + 5;
	int Iloczyn = 1;
	
	while (Od <= koniec)
	{
		Iloczyn *= Od;
		Od++;
	}
	cout<<"n="<< Od - 6 <<"\n";
	cout<<" Iloczyn wynosi:" << Iloczyn << "\tostatnia liczba: " << Od;
	
	
	return 0;
}
//	y = 4;
//	result = liczba_liter % 4 + 1;
//    printf("%f", result);
//	cout<<"n="<< result <<"\n";
//	while(result==9<10);
  //  {
//		cout<<"koniec=9";
//	}
