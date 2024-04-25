#include <iostream>
using namespace std;

float minimum(float arr[], int size) {
    float min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

float maksimum(float arr[], int size) {
    float max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    const int MAX_SIZE = 50;
    float a[MAX_SIZE];
    int n;

    cout << "Podaj ilosc elementow ciagu:" << endl << "n = ";
    cin >> n;

    cout << "Wczytaj elementy ciagu:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> a[i];
    }

    float min = minimum(a, n);
    float max = maksimum(a, n);

    cout << "Element minimalny ciagu: " << min <<endl;
	cout << "Element maksymalny ciagu: " << max << endl;

    return 0;
}

