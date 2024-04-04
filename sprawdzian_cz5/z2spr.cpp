#include <iostream>

using namespace std;

int main() {
    int tab_CZ[4][2]; 
    char initials[] = "CZ"; 

    for (int j = 0; j < 2; ++j) {
        for (int i = 0; i < 4; ++i) {
            cout << "Podaj element tab_" << initials << " [" << i << "] [" << j << "]: ";
            cin >> tab_CZ[i][j];
            
            
            if (tab_CZ[i][j] % 2 != 0) {
                cout << "Podana liczba musi byæ parzysta." << endl;
                --i; 
            }
        }
    }

    cout << endl << "Tablica " << initials << ":" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << tab_CZ[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
