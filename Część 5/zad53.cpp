#include <iostream>
#include <cstdlib>

//Sortowanie przez wybór

using namespace std;

int main() {
	system("chcp 1250");
    const int n = 7;
    int tab[n];

    // Wprowadzenie danych do tablicy
    for (int i = 0; i < n; ++i) {
        cout << "Podaj element tablicy [" << i << "] = ";
        cin >> tab[i];
    }

    // Wyœwietlenie wprowadzonej tablicy
    cout << "wygl¹d wprowadzonej tablicy tab [ ";
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << " ";
    }
    cout << "]" << endl;

    // Sortowanie przez wybór
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;

        for (int j = i + 1; j < n; ++j) {
            if (tab[j] < tab[min_index]) {
                min_index = j;
            }
        }

        // Zamiana miejscami
        int bufor = tab[min_index];
        tab[min_index] = tab[i];
        tab[i] = bufor;
    }

    // Wyœwietlenie posortowanej tablicy
    cout << "posortowana tablica wygl¹da nastêpuj¹co: tab[ ";
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}

