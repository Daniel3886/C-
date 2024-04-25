#include <iostream>
#include <cmath> // Include the cmath library for the abs function

using namespace std;

float dodaj(float x) {
    return abs(x); // Return the absolute value of the result
}

int main() {
    float liczba; // Declare liczba variable
    cout << "Podaj liczbe: ";
    cin >> liczba; // Read the number into liczba
    cout << "wartosc bezwzgledna podanej liczby = " << dodaj(liczba);

    return 0;
}

