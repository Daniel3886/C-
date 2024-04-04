#include <iostream>

using namespace std;

int main() {
    string nazwisko = "CZ"; // Twoje nazwisko
    int month;
    cout << "Podaj miesi¹c Twojego urodzenia: ";
    cin >> month;

    int rozmiar = 3 + month;
    int macierz_CZ[rozmiar];

    for (int i = 0; i < rozmiar; ++i) {
        macierz_CZ[i] = i + 4;
    }


    for (int i = 0; i < rozmiar; ++i) {
        cout << "macierz_" << nazwisko << " [" << i << "]=" << macierz_CZ[i] << endl;
    }

    return 0;
}


