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
    cout<<"wartosci musza byc wieksze od 1 oraz wartosc gor musi byc wieksza od dol"<< endl;
    
       cout << "Podaj wartosc dolna= ";
       cin >> dol;

       cout << "Podaj wartosc gorna= ";
       cin >> gor;
    }
    cout <<"znalezione liczby blizniace to:"<<endl; 


    for (int j_cze = dol; j_cze <= gor - 2; j_cze++) {
        if (czy_pierwsza(j_cze) && czy_pierwsza(j_cze + 2) ) {
            cout << j_cze <<"\t"<< j_cze +2 <<endl;
        }
    }

    return 0;
}

