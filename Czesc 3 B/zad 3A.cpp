#include <iostream>

using namespace std;

int main() {
    int a, b, c, min, max;

    cout << "Podaj wartosci a, b, c rozdzielajac je spacjami: ";
    cin >> a >> b >> c;


    min = (a < b) ? a : b;
    max = (a > b) ? a : b;


    if (c < min) {
        max = min;
        min = c;
    } else if (c > max) {
        max = c;
    }
	cout<<"wprowadzone liczby to: "<< a <<" "<< b <<" "<<  c <<"\n";
    cout << "Wpisuje rosnaco: " << min << " " << (a + b + c - min - max) << " " << max;

    return 0;
}

