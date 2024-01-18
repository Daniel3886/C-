#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int rows = 5;
    const int cols = 2;

    int macierz[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Podaj element a[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }

    cout << "\nMacierz:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << macierz[i][j] << " ";
        }
        cout << std::endl;
    }

    int srednie[rows];
    for (int i = 0; i < rows; ++i) {
        int suma = 0;
        for (int j = 0; j < cols; ++j) {
            suma += macierz[i][j];
        }
        srednie[i] = suma / cols;
    }

    int maxElement = numeric_limits<int>::min();
    int minElement = numeric_limits<int>::max();
    int maxIndex = -1;
    int minIndex = -1;

    for (int i = 0; i < rows; ++i) {
        if (srednie[i] > maxElement) {
            maxElement = srednie[i];
            maxIndex = i;
        }
        if (srednie[i] < minElement) {
            minElement = srednie[i];
            minIndex = i;
        }
    }

    cout << "\nTablica srednich wyglada nastepujaco: A[ ";
    for (int i = 0; i < rows; ++i) {
        cout << srednie[i] << " ";
    }
    cout << "]" << endl;

    cout << "Max: A[" << maxIndex << "] = " << maxElement<<".5" << endl;
    cout << "Min: A[" << minIndex << "] = " << minElement<<".5" << endl;

    return 0;
}
