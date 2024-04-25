#include <iostream>

using namespace std;

// Funkcja obliczaj¹ca ci¹g Fibonacciego
int fib(int n) {
    if (n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
	int n;
    cout << "Obliczam wskazany element ciagu Fibonacciego" << endl;
    cout << "Podaj, ktory element ciagu Fibonacciego, ktory nalezy obliczyc = ";
    cin >> n;

    cout << "FIBO(" << n << ")=" << fib(n);

    return 0;
}

