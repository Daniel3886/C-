#include <cstdlib>
#include <iostream>
double silnia(int n);
using namespace std;
int main(int argc, char *argv[])
{
 int n;
 double wynik;
 cout<<"Obliczam silnie z liczby naturalnej"<<endl;
 cout<<"Podaj liczbe n=";
 cin>>n;
 wynik=silnia(n);
 cout<<"silnia("<<n<<")="<<wynik;
 cout<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}
double silnia(int n)
{
if (n==0)
 {
 return 1;
 }
 else
 {
 return n*silnia(n-1); // tutaj funkcja silnia wywo³uje sam¹ siebie
 }
}
