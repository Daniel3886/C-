#include <iostream>

using namespace std;

int main() {
    double suma = 0.0;
	double avg = 0.0;
    for (int i = 10; i <= 99; i++) {
        suma += i; 
        avg = suma / i ;
        cout<<"suma w " << i << " petli= "<< suma << " srednia= " << avg << endl;
    }

    cout << "\n\nCalkowita suma=" << suma << endl; 
    cout << "\nsrednia suma=" << avg << endl;

    return 0;
}

