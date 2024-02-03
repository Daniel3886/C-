#include <iostream>
#include <conio.h>
using namespace std;

int main()
 {
 	  float bok, pole;
 	  char kontynuuj = 't';
    do {
        cout << "Podaj bok kwadratu w centymetrach: ";
        cin >> bok;
        if (bok > 0) {
            pole = bok * bok;
            cout << "Pole kwadratu = " << pole << "cm^2" << endl;
        } else {
            cout << "Bok musi byc wiekszy od zera." << endl;
        }
        cout << "Jesli powtorzyc program wcisnij t(tak)" << endl;
        cout << "w przeciwnym przypadku wcisnij dowolny klawisz literowy" << endl;
        getch();
        cin >> kontynuuj;
    } while (kontynuuj = 't');

    return 0;
}

