#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int liczba;
    char imie, nazwisko;
    cout << "Prosze podac pierwsza litere kodu: ";
    cin >> nazwisko;
    cout << "Prosze podac druga litere kodu: ";
    cin >> imie;
    cout << "Prosze podac trzecia litere kodu: ";
    cin >> liczba;
    cout << "Podany kod to: " << nazwisko << imie << liczba << "\n";

    if (liczba != 'C' && liczba != 'c' && imie != 'D' && imie != 'd' && nazwisko != '58')
    {
        cout << "Przykro nie znasz hasla";
    }
    else
    {
        cout << "Jest OK znasz haslo";
    }
    return 0;
}
    
    
