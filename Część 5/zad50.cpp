#include <iostream>

const int ROWS = 3;
const int COLS = 3;
const int EXT_COLS = 5;

using namespace std;

int main() {
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Podaj element a[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int extendedMatrix[ROWS][EXT_COLS];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            extendedMatrix[i][j] = matrix[i][j];
        }

        extendedMatrix[i][COLS] = matrix[i][0];
        extendedMatrix[i][COLS + 1] = matrix[i][1];
    }


	cout << "\nPe³na macierz ze skopiowanymi elementami wygl¹da nastêpuj¹co:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < EXT_COLS; ++j) {
            cout << extendedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    int determinant = (extendedMatrix[0][0] * extendedMatrix[1][1] * extendedMatrix[2][2]) +
                      (extendedMatrix[0][1] * extendedMatrix[1][2] * extendedMatrix[2][3]) +
                      (extendedMatrix[0][2] * extendedMatrix[1][3] * extendedMatrix[2][4]) -
                      (extendedMatrix[0][2] * extendedMatrix[1][1] * extendedMatrix[2][0]) -
                      (extendedMatrix[0][3] * extendedMatrix[1][2] * extendedMatrix[2][1]) -
                      (extendedMatrix[0][4] * extendedMatrix[1][3] * extendedMatrix[2][2]);

    cout << "\nWyznacznik tablicy a = " << determinant << endl;

    cin.ignore();
    cin.get();
    return 0;
}

