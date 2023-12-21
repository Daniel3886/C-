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
 cin>>a[i]; // tu wprowadzamy liczby do kolejnych komórek
 sum+= a[i];
 }
 int avg = sum / i; 
cout <<"suma elementów wczytanych do tablicy A jest równa "<<sum<<"\n";
cout<<"œrednia elementów wczytanych do tablicy A jest równa "<<avg<<"\n";
 
 //system("PAUSE");
 return 0;
}
