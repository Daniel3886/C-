#include <iostream>

const int MAX_SIZE = 10;

using namespace std;

int main() {
    int arr[MAX_SIZE];

    int n;

    do {
        cout << "Podaj ilosc elementow tablicy a (maksymalnie 10): ";
        cin >> n;

        if (n < 1 || n > MAX_SIZE) {
            cout << "Tablica musi zawierac minimum 1 a maksymum 10 elementow!\n";
        }
    } while (n < 1 || n > MAX_SIZE);


    for (int i = 0; i < n; ++i) {
        cout << "Podaj a[" << i << "] = ";
    	cin >> arr[i];
    }

    // Odwróæ tablicê
    for (int i = 0; i < n / 2; ++i) {

        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Odwrocona tablica a:\n";
    for (int i = 0; i < n; ++i) {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}

