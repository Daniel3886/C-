#include <iostream>

using namespace std;

int ciag(int n) {

    if (n == 1) {
        return 1;
    }
    return n * n * (n - 2) * (n - 4);
}

int main() {
    int n = 7;
    int wynik = ciag(n);
    cout << "Obliczam wskazany element ciagu liczbowego" << endl;
    cout << "Podaj, ktory element ciagu Fibonacciego, ktory nalezy obliczyc = ";
    cin >> n;
    cout << "CIAG(" << n << ")=" << wynik << endl;

    return 0;
}

