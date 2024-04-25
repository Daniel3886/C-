#include <iostream>

using namespace std;

// Funkcja obliczaj¹ca w ci¹gu liczbowym a1=3 a2=7 a3=16 a4=32 a5=57 a6=93
int WyrazCiagu(int n) {
    if (n == 1)
        return 3;
    else if(n == 2)
        return 7;
    else
        return WyrazCiagu(n - 1) + (n - 1) * (n + 1);
}

int main() {
    int n;
    cout << "Obliczam wskazany element ciagu liczbowego" << endl;
    cout << "Podaj, ktory element ciagu Fibonacciego, ktory nalezy obliczyc = ";
    cin >> n;

    cout << "CIAG(" << n << ")=" << WyrazCiagu(n) << endl;

    return 0;
}

