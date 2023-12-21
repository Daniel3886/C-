#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 void rysujProstokat(int wysokosc, int szerokosc)
  {
srand(time(0));
for (int i = 0; i < wysokosc; ++i) 
{
	std::cout << " " ;
for (int j = 0; j < szerokosc; ++j)
{ 

SetConsoleTextAttribute(hConsole, j) ;
	
std::cout << "*" ;
}
std::cout << std::endl;
}
}
int main() 
{
int numerDziennika, miesiacUrodzenia; 
std::cout << "Podaj Twój numer w dzienniku: "; 
std::cin >> numerDziennika; 
std::cout << "Podaj Twój miesi¹c urodzenia: "; 
std::cin >> miesiacUrodzenia;
 int szerokosc = miesiacUrodzenia; 
 int wysokosc = numerDziennika; 
 std::cout << "\nSzerokoœæ: " << szerokosc << "\nWysokoœæ: " << wysokosc << std::endl;
rysujProstokat(wysokosc, szerokosc); 
std::cout << "\nNaciœnij dowolny klawisz, aby zakoñczyæ.";
 std::cin.ignore();
 std::cin.get(); 
return 0; 
}
