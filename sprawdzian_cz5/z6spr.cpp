#include <iostream>

using namespace std;

int main() {
    int tab[5][5];

    // Wype³nianie tablicy
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i == 0 || i == 4) {
                tab[i][j] = 9;
            } else {
                tab[i][j] = i + 1;
            }
        }
    }

    // Wypisywanie tablicy
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
