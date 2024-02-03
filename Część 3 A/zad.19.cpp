#include <iostream>

using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbe calkowita:";
    cin >> liczba;

    if (liczba > 0) {
        cout << "Liczba wieksza od zera" << endl;
    } else
	 if (liczba < 0) {
        cout << "Liczba mniejsza od zera" << endl;
    } else {
        cout << "Liczba rowna zero" << endl;
    }

    return 0;
}

