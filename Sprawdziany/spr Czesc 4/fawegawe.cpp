#include <iostream>
int sumaDzielnikow(int n) 
{ 
int suma = 0; 
for (int i = 1; i < n; ++i) 
{ 
if (n % i == 0) 
{ 
suma += i;
 } 
 } return suma;
  } 
  void znajdzZaprzyjaznione(int dol, int gor)
   {
for (int a = dol; a <= gor; ++a)
	 { 
int b = sumaDzielnikow(a);
if (a < b && b <= gor && sumaDzielnikow(b) == a)
{ 
std::cout << a << " " << b << std::endl; 
}
  }
}
using namespace std;
 int main() {
cout << "Podaj liczbe dolna: ";
int dol; 
cin >> dol; 
cout << "Podaj liczbe gorna: "; 
int gor; std::cin >> gor;
cout << "Liczby zaprzyjaŸnione z przedzia³u od " << dol << " do " << gor << " to:" << std::endl;
 znajdzZaprzyjaznione(dol, gor);
cout << "Koniec." << std::endl; 
cout << "Naciœnij dowolny klawisz, aby zakoñczyæ.";
cin.ignore(); 
cin.get();
 return 0;
  }
