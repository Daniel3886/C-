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
std::cout << "Podaj Tw�j numer w dzienniku: "; 
std::cin >> numerDziennika; 
std::cout << "Podaj Tw�j miesi�c urodzenia: "; 
std::cin >> miesiacUrodzenia;
 int szerokosc = miesiacUrodzenia; 
 int wysokosc = numerDziennika; 
 std::cout << "\nSzeroko��: " << szerokosc << "\nWysoko��: " << wysokosc << std::endl;
rysujProstokat(wysokosc, szerokosc); 
std::cout << "\nNaci�nij dowolny klawisz, aby zako�czy�.";
 std::cin.ignore();
 std::cin.get(); 
return 0; 
}
