#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
	system("Title autor: Czerczon Daniel");
	system("chcp 1250");
string cze_name, cze_surname;
    int cze_age, cze_year;

	cout << "Jak masz na imie?: ";
	cin >> cze_name;

	cout << "Podaj swoje nazwisko?: ";
	cin >> cze_surname;
	
	cout << "Ile masz lat?: ";
	cin >> cze_age;ef
	
	cout << "Podaj aktualny rok: ";
	cin >> cze_year;
	
	 int cze_first_school_year = cze_year - cze_age + 7;
    int cze_birth_year = cze_year - cze_age;
	
	cout << "Witaj " <<cze_name << " " << cze_surname << "!  Pierwsza nauke w szkole podjales w roku " << cze_first_school_year <<" \n";
	cout << "Twoj rok urodzenia " << cze_birth_year;

	return 0;
}
