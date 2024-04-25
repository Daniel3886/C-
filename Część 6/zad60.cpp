#include <iostream>

using namespace std;

void PROSTOKAT_nazwisko_ucznia() {
    cout << "******" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "******" << endl;
}

void TROJKAT_nazwisko_ucznia() {
    cout << "   *  " << endl;
    cout << "  * *" << endl;
    cout << " *   *" << endl;
     cout << "*******" << endl;
}

int main() {
    for (int i = 1; i < 4; i++) {
    	cout<<"\n" << i <<") Prostokat: \n";
        PROSTOKAT_nazwisko_ucznia();
        cout<<"\n" << i  <<") Trojkat: \n";
        TROJKAT_nazwisko_ucznia();
        cout<<"\n";
    }

    return 0;
}

