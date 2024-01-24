#include <iostream>

const int ROWS = 3;
const int COLS = 4;

using namespace std;

int main() {
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Podaj element a[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nWczytana macierz:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j];
        }
    }

    cout << "\nSuma wszystkich elementow macierzy a = " << sum << endl;

    int scalar;
    cout << "Podaj liczbê przez ktora chcesz pomnozyc macierz: ";
    cin >> scalar;

    cout << "\nMacierz po pomnozeniu przez " << scalar << ":\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] *= scalar;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

