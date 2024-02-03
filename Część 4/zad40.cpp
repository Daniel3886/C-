#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int nr_z_dziennika;
    cout << "Podaj numer z dziennika: ";
    cin >> nr_z_dziennika;

    int liczba = 1000 + nr_z_dziennika * 100 + 15;

    int closestPrime = liczba;
    while (!isPrime(closestPrime)) {
        closestPrime++;
    }

    cout << "Podana liczba = " << liczba << endl;
    cout << "Podana liczba=1000+numer_z_dziennika*100+15 wynosi "<< liczba <<"/n Najblizsza liczba pierwsza to "  << closestPrime << endl;

    return 0;
}

