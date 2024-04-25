#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj numer elementu ciagu: ";
    cin >> n;

    if (n < 1) {
        cout << "Blad: Numer elementu musi byc wiekszy lub rowny 1." << endl;
        return 1; 
    }

    int a = 2; 
    int d = 5;

    cout << "\na(1)=" << a;

    for (int i = 2; i <= n; ++i) {
        a += d; 
        cout << " a(" << i << ")=" << a;
    }

    cout << endl;

    return 0;
}

