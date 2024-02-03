#include <iostream>
#include <cstdlib>

//Sortowanie przez wstawianie

using namespace std;

int main() {
	system("chcp 1250");
    const int n = 7;
    int tab_kow[n];

    // Wprowadzenie danych do tablicy
    for (int i = 0; i < n; ++i) {
        cout << "Podaj element tablicy [" << i << "] = ";
        cin >> tab_kow[i];
    }

    // Wy�wietlenie tablicy przed sortowaniem
    cout << "wygl�d wprowadzonej tablicy tab [ ";
    for (int i = 0; i < n; ++i) {
        cout << tab_kow[i] << " ";
    }
    cout << "]" << endl;

    // Sortowanie przez wstawianie
    for (int i = 1; i < n; ++i) {
        int element = tab_kow[i];
        int j = i - 1;

        while (j >= 0 && tab_kow[j] > element) {
            tab_kow[j + 1] = tab_kow[j];
            --j;
        }

        tab_kow[j + 1] = element;
    }

    // Wy�wietlenie posortowanej tablicy
    cout << "posortowana tablica wygl�da nast�puj�co: tab[ ";
    for (int i = 0; i < n; ++i) {
        cout << tab_kow[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}

