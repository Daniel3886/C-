#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj, numer elementu ciagu: ";
    cin >> n;

    if (n < 1) {
        cout << "B��d: n musi by� wi�ksze lub r�wne 1." << endl;
        return 1;
    }

    int pocz = 2; 
    int an = pocz;
    int i = 1; 
    
   
    do {
        an = pocz + (i * i);
        pocz = an; 
        i++;
    } while (i <= n);
    
    cout << "a(" << n << ") = " << an << endl; 

    return 0;
}

