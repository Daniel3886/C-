#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
 int sum;
 int a[8];
 int i;
 int positive = 0;
 int equal = 0;
 int negative = 0;
 for( i=0;i<8;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; 
  if (a[i] > 0){
 	positive++;
 }else if(a[i] == 0){
 	equal++;
 }else{
 	negative++;
 }
 }

cout <<"liczba wyraz�w ci�gu kt�re s� wi�ksze od zera wynosi "<< positive <<"\n";
cout <<"liczba wyraz�w ci�gu kt�re s� r�wne od zera wynosi "<< equal <<"\n";
cout <<"liczba wyraz�w ci�gu kt�re s� mniejsze od zera wynosi "<< negative <<"\n";
 return 0;
}
