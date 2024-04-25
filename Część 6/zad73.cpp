#include <iostream>

using namespace std;

// Funkcja rekurencyjna obliczaj�ca ilo�� permutacji
int liczbaPermutacji(int n) {
    if (n == 1) {
        return 1; // Dla jednej liczby jest tylko jedna permutacja
    } else {
        // Ilo�� permutacji dla n liczb to n * ilo�� permutacji dla n-1 liczb
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

    // Obliczenie ilo�ci permutacji
    int permutacje = liczbaPermutacji(n);

    // Wy�wietlenie wyniku
    cout << "Ilosc mozliwych ustawien dla " << n << " liczb wynosi " << permutacje << endl;

    return 0;
}

