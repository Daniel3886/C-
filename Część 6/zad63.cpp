#include <iostream>

using namespace std;

double POW_nazwisko_ucznia(double A, double B) {
    return A * B;
}

double OBW_nazwisko_ucznia(double A, double B) {
    return 2 * (A + B);
}

int main() {
    double A, B;
    
    
for(int i  = 1; i < 3; i++){ 
    cout << "Podaj A: ";
    cin >> A;
    cout << "Podaj B: ";
    cin >> B;

    double pole = POW_nazwisko_ucznia(A, B);
    double obwod = OBW_nazwisko_ucznia(A, B);

    cout << "POW(" << A << ", " << B << ") = " << pole << "cm^2" << endl;
    cout << "OBW(" << A << ", " << B << ") = " << obwod << "cm" << endl;
}
    return 0;
}

