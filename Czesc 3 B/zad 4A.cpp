#include <iostream>

using namespace std;

int main() {
    int n, i = 0, s1 = 0, s2 = 0, k;

    cout << "Podaj N: ";
    cin >> n;

    while (i < n) {
        cout << "Wczytaj K: ";
        cin >> k;

        if (k % 2 != 0) {
            s1 = s1 + k;
        } else {
           s2 = s2 + k;
        }

        i++;
    }

    cout << "Wartosci s1: " << s1;
    cout << "Wartosci s2: " << s2;

    return 0;
}

