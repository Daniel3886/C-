#include <iostream>

using namespace std;

int main() {
    double suma = 0.0;

    for (int i = 1; i <= 999991; ++i) {
        suma += 1.0 / i; 
        cout << i << "suma w petli= " << suma << endl;
    }

    cout << "Calkowita suma=" << suma << endl; 

    return 0;
}

