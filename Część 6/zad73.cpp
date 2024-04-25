#include <iostream>

using namespace std;

// Funkcja rekurencyjna obliczaj¹ca iloœæ permutacji
int liczbaPermutacji(int n) {
    if (n == 1) {
        return 1; // Dla jednej liczby jest tylko jedna permutacja
    } else {
        // Iloœæ permutacji dla n liczb to n * iloœæ permutacji dla n-1 liczb
        return n * liczbaPermutacji(n - 1);
    }
}

int main() {
    int n;

    // Wczytanie liczby n z zakresu (0 < n < 26)
    do {
    	cout<< "Dokonujemy sprawdzenia ustawien liczb z przedzialu 0<n<26" <<  endl;
        cout<< "Podaj ilosc liczb do sprawdzenia: ";
        cin >> n;

        if (n <= 0 || n >= 26) {
            cout << "Blad: Podaj liczbe z przedzialu (0 < n < 26)." << endl;
        }
    } while (n <= 0 || n >= 26);

    // Obliczenie iloœci permutacji
    int permutacje = liczbaPermutacji(n);

    // Wyœwietlenie wyniku
    cout << "Ilosc mozliwych ustawien dla " << n << " liczb wynosi " << permutacje << endl;

    return 0;
}

