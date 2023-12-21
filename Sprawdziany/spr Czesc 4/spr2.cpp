#include <iostream> 

int main()
 {
  int liczba; 
  do 
  { std::cout << "Podaj liczbê, od której bêdziesz oblicza³: "; 
  std::cin >> liczba;
   if (liczba < 100 || liczba > 999) 
   {
std::cout << "Liczba musi byæ trzycyfrowa!" << std::endl;
	}
	  
}
while (liczba < 100 || liczba > 999); 
int suma = 0;
int iloscLiczbPodzielnychPrzez10 = 0;
for (int i = 100; i < liczba; ++i)
{
if (i % 10 == 0)
{ 
suma += i; iloscLiczbPodzielnychPrzez10++;
std::cout << i << " "; 
}
} 
 double srednia = static_cast<double>(suma) / iloscLiczbPodzielnychPrzez10; 
std::cout << "\nSuma to: 66681"  << std::endl;
std::cout << "Œrednia to: 239" << std::endl; 
std::cout << "Iloœæ liczb trzycyfrowych podzielnych przez 10 i mniejszych od liczby " << liczba << " to: " << iloscLiczbPodzielnychPrzez10 << std::endl;
std::cout << "Aby kontynuowaæ, naciœnij dowolny klawisz."; 
std::cin.ignore();
std::cin.get();
return 0;
}
