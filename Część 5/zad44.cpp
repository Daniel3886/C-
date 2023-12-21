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
 cin>>a[i]; // tu wprowadzamy liczby do kolejnych komórek
 //sum = a[i];
 multiply *= a[i]; 
 }

cout <<"suma elementów wczytanych do tablicy A jest równa "<<multiply<<"\n";
//cout<<"œrednia elementów wczytanych do tablicy A jest równa "<<avg<<"\n";
 
 //system("PAUSE");
 return 0;
}
