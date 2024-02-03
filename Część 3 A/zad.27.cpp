#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	system("chcp 1250");
	system("cls");
	
	char litera;
	cout << "Podaj pierwsz¹ literê kraju z którym graniczy Polska:";
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
			cout << "S³owacja";
			break;
		case 'b':
			cout << "Bia³oruœ";
			break;
		case 'l':
			cout << "Litwa";
			break;
	}
	
	return 0;
}
