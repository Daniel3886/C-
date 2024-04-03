#include <iostream>
using namespace std;

int main() {
    int n;
    int a[10];

    do {
        cout << "Podaj ilosc elementow tablicy a: ";
        cin >> n;

        if (n > 10) {
            cout << "Ilosc elementow nie moze przekroczyc 10!" << endl;
        }
    } while (n > 10);

    // Wczytywanie elementów tablicy
    for (int i = 0; i < n; ++i) {
        cout << "Podaj a[" << i << "] = ";
        cin >> a[i];
    }

    // Liczenie ilości zmian znaków
    int zmiany = 0;
    for (int i = 0; i < n - 1; ++i) {
        if ((a[i] < 0 && a[i+1] >= 0) || (a[i] >= 0 && a[i+1] < 0)) {
            zmiany++;
        }
    }

    cout << "Ilosc zmian znakow: " << zmiany << endl;

    return 0;
}
