#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
 int sum;
 int a[5];
 int i;
 int multiply;
 for( i=0;i<5;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; // tu wprowadzamy liczby do kolejnych kom�rek
 //sum = a[i];
 multiply *= a[i]; 
 }

cout <<"suma element�w wczytanych do tablicy A jest r�wna "<<multiply<<"\n";
//cout<<"�rednia element�w wczytanych do tablicy A jest r�wna "<<avg<<"\n";
 
 //system("PAUSE");
 return 0;
}
