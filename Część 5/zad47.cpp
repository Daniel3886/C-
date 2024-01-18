#include <iostream>

using namespace std;

int main() {
    const int rows = 5;
    const int cols = 5;

    char tablica[rows][cols] = {
        {'9', '1', '1', '1', '1'},
        {'1', '9', '1', '1', '1'},
        {'1', '1', '9', '1', '1'},
        {'1', '1', '1', '9', '1'},
        {'1', '1', '1', '1', '9'}
    };

    // Wydrukuj tablicê wierszami
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << tablica[i][j];
        }
        cout << std::endl;
    }

    return 0;
}
