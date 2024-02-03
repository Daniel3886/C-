#include <iostream>

using namespace std;

int main() 
{
    int a, b;

    cout << "Program wykonujacy dzielenie" << endl;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    if (b == 0) {
        cout << "Blad! Dzielenie przez 0" << endl;
    } else {
        cout << "Wynik dzielenia to: " << a/b << endl;
    }

    return 0;
}

