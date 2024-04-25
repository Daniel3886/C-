#include <cstdlib>
#include <iostream>
using namespace std;
bool pierwsza(int liczba)
 {
 int ilosc=0;
 for (int i=1;i<=liczba;i++)
 {
 if(liczba%i==0) /* sprawdzamy wszystkie podzielniki w tym 1 oraz sam¹ siebie -
liczba*/
 {ilosc++;}
 }
 if (ilosc==2) //dwa podzielniki 1 oraz liczba informuj¹ nas ¿e liczba jest pierwsza
 {return true;}
 else
 {return false;} //istnieje co najmniej jeszcze jeden podzielnik
 }
int main(int argc, char *argv[])
{
 int liczba;
 cout<<"podaj liczbe=";
 cin>>liczba;
 if (pierwsza(liczba)==true)
 {cout<<"liczba jest pierwsza";}
 else
 {cout<<"liczba nie jest pierwsza";}
 cout<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
