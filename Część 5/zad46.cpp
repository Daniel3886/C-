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

cout <<"liczba wyrazów ci¹gu które s¹ wiêksze od zera wynosi "<< positive <<"\n";
cout <<"liczba wyrazów ci¹gu które s¹ równe od zera wynosi "<< equal <<"\n";
cout <<"liczba wyrazów ci¹gu które s¹ mniejsze od zera wynosi "<< negative <<"\n";
 return 0;
}
