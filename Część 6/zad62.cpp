#include <iostream>
#include <iomanip>

using namespace std;

double f_czerczon(double x_czerczon) {
    return x_czerczon; 
}

int main() {
	
    for (double i = 0; i <= 1.4; i += 0.1) {
        cout << "f(" << i << ") = ";
        if (i <= 0.7) {
            cout << f_czerczon(i) << endl;
        } else {
            cout << "1" << endl;
        }
    }

    return 0;
}

