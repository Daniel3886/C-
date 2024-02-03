#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <windows.h>


using namespace std;

int main()
{
	system("Title STRINGI - autor: Czerczon Daniel");
	system("chcp 1250");
	system("color 80");

	string name, surname;

	cout << "Podaj swoje imie: ";
	cin >> name;

	cout << "Podaj swoje nazwisko: ";
	cin >> surname;
	
	cout << "Nazywasz sie " << name << " " << surname << "\n";

	cout << "Twoje imie ma " << name.size() << ", a nazwisko " << surname.size() << " liter\n";
	
	cout << "Lacznie twoje dane maja " << name.size()+surname.size() << " liter \n";

	cout << "Twoje inicjaly to " << name[0] << surname[0] << "\n";
	
	/*char name[64], surname[64];
	
	printf("Podaj swoje imię: ");
	scanf("%s", name);
	
	printf("Podaj swoje nazwisko: ");
	scanf("%s", surname);

	printf("Nazywasz sie %s %s\n", name, surname);

	printf("Twoje inicjały to %s%s\n", name[0], surname[0]);*/
	
	return 0;
}
