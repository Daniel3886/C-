#include <cstdlib>
#include <iostream>
using namespace std;
float liczba;
float dodaj(float x) // tutaj umieszczamy funkcj� dodaj
{
x+=5; // zmienna x jest zmienn� lokaln� wy��cznie na potrzeby funkcji dodaj
return x;
}
int main(int argc, char *argv[])
{
cout<<"Podaj liczb� do kt�rej dodamy warto�� 5: ";
cin>>liczba; // zmienna liczba jest zmienn� globaln�
cout<<"wynik dodawania "<<liczba<<" + 5 = "<<dodaj(liczba)<<endl; // tutaj wywo�uj�
funkcj� dodaj z parametrem podanej liczby
system("PAUSE");
return EXIT_SUCCESS;
}
