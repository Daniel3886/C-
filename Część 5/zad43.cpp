#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
 int sum;
 int a[7];
 int i;
 for( i=0;i<=6;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; // tu wprowadzamy liczby do kolejnych kom�rek
 sum+= a[i];
 }
 int avg = sum / i; 
cout <<"suma element�w wczytanych do tablicy A jest r�wna "<<sum<<"\n";
cout<<"�rednia element�w wczytanych do tablicy A jest r�wna "<<avg<<"\n";
 
 //system("PAUSE");
 return 0;
}
