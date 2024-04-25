#include <cstdlib>
#include <iostream>
using namespace std;
float liczba;
float dodaj(float x) // tutaj umieszczamy funkcjê dodaj
{
x+=5; // zmienna x jest zmienn¹ lokaln¹ wy³¹cznie na potrzeby funkcji dodaj
return x;
}
int main(int argc, char *argv[])
{
cout<<"Podaj liczbê do której dodamy wartoœæ 5: ";
cin>>liczba; // zmienna liczba jest zmienn¹ globaln¹
cout<<"wynik dodawania "<<liczba<<" + 5 = "<<dodaj(liczba)<<endl; // tutaj wywo³ujê
funkcjê dodaj z parametrem podanej liczby
system("PAUSE");
return EXIT_SUCCESS;
}
