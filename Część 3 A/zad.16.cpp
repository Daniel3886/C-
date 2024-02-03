#include<iostream>
using namespace std;
 
int main()
{
int a,b;
cout << "Podaj pierwsza liczbe n=";
cin >> a;
cout << "Podaj druga liczbe mniejsza lub rowna pierwszej m=";
cin >> b;
cout << "NWD(" << b << "," << a << ") = ";
while (a != b)
{
if (a < b)
b -= a;
else
a -= b;
}
cout << a << endl;
return 0;
}
