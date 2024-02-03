#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Podaj wartosc N: ";
    cin >> N;

    int wyn = 0;
    int d = 2; 

    do {
        if (N % d == 0) {
            wyn++;
        }
        d++;
    } while (d <= (N / 2));

    cout << "wyn = " << wyn << endl; 
    cout << "d = " << d << endl;

    return 0;
}

