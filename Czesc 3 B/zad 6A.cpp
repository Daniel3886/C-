#include <iostream>

using namespace std;

int main() {
    int n, k, i = 1, potega = 1;
    
    cout << "Podaj n = ";
    cin >> n;
    cout << "Podaj k = ";
    cin >> k;
    
    while (i <= k) { 
        potega = potega * n;
        i++;
    }
    
    cout << "Wynik = " << potega;
    
    return 0;
}

