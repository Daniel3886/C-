#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	system("chcp 1250");
	system("cls");
	
	char litera;
	cout << "Podaj pierwsz� liter� kraju z kt�rym graniczy Polska:";
	cin >> litera;
	
	switch (litera){
		case 'u':
			cout << "Ukraine";
			break;
		case 'n':
			cout << "Niemcy";
			break;
		case 'r':
			cout << "rosja";
			break;
		case 'c':
			cout << "Czechy";
			break;
		case 's':
			cout << "S�owacja";
			break;
		case 'b':
			cout << "Bia�oru�";
			break;
		case 'l':
			cout << "Litwa";
			break;
	}
	
	return 0;
}
