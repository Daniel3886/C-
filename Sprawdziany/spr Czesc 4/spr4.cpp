#include <iostream>

using namespace std;

 int main()
{ 
string imie;
cout << "Podaj imiê: ";
cin >> imie; 
int szerokoscWysokosc = imie.length() + 2;
for (int i = 0; i < szerokoscWysokosc; ++i)
{
for (int j = 0; j < i; ++j)
 {
 if (j == 0 || i == szerokoscWysokosc - 1) 
 {
cout << "*";}

else
{ 
cout << " "; 
}
} 
cout << std::endl; 
 }
cout << "Aby kontynuowaæ, naciœnij dowolny klawisz.";
cin.ignore(); 
cin.get(); 
return 0; 
}
