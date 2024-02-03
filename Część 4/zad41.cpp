#include <iostream>

using namespace std;

bool czy_pierwsza(int liczba) {
    if (liczba < 2) {
        return false;
    }
    for (int i = 2; i * i <= liczba; i++) {
        if (liczba % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int dol, gor;

    cout << "Podaj dolna wartosc: ";
    cin >> dol;

    cout << "Podaj gora wartosc: ";
    cin >> gor;

    // Sprawdzenie poprawnoœci danych wejœciowych
    while (dol >= gor || dol < 2 || gor < 2) {
       cout << "Podaj wartosc dolna= ";
       cin >> dol;

       cout << "Podaj wartosc gorna= ";
       cin >> gor;
    }

    int suma = 0;
    for (int j_cze = dol; j_cze <= gor; j_cze++) {
        if (czy_pierwsza(j_cze)) {
            suma += j_cze;
        }
    }

     for (int j_cze = dol; j_cze <= gor; j_cze++) {
        if (czy_pierwsza(j_cze)) {
            cout << "liczba " << j_cze << " to jest liczba pierwsza \n";
            
        }
    }

    cout << "Suma= " << suma <<endl;

    return 0;
}

