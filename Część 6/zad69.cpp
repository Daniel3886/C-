#include <iostream>

using namespace std;

int CIAG(int n) {
    if (n == 1)
        return 2;
    else if (n == 2)
        return 7;
    else
        return CIAG(n - 1) + 5;
}

int main() {
    int n = 20; 
    cout << "Obliczam wskazany element ciagu liczbowego" << endl;

    cout << "CIAG(" << n << ")=" << CIAG(n) << endl;

    return 0;
}

