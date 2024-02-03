#include <iostream>

using namespace std;

int main() {
    int liczba;

    cout << "Bede sprawdzal czy liczba nalezy do przedzialu <-5,6)\n";

    cout << "Podaj liczbe do sprawdzenia: ";
    cin >> liczba;

    if (liczba >= -5 && liczba < 6) {
        cout << "Liczba nalezy do przedzialu <-5,6)" ;
    } else {
        cout << "Liczba nie nalezy do przedzialu <-5,6)";
    }

    return 0;
}

