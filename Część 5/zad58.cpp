#include <iostream>

using namespace std;

void czekajNaKlawisz() {
    cout << "Aby kontynuowac, nacisnij dowolny klawisz" << endl;
    cin.ignore();  // Ignorujemy dowolny znak wprowadzony przez u¿ytkownika
    cin.get();     // Czekamy na naciœniêcie klawisza
}

int main() {
    int skok;
    cout << "Podaj ilosc skokow narciarskich odnotowanych przez trenera: ";
    cin >> skok;

    int* dlugoscSkoku = new int[skok];
    cout << "Podaj jakie wyniki skokow uzyskal zawodnik (liczby oddziel enterem):" << endl;
    for (int i = 0; i < skok; ++i) {
        cin >> dlugoscSkoku[i];
    }

    int a, b;
    cout << "Podaj dlugosc sprawdzanego okresu (liczby oddziel enterem):" << endl;
    cin >> a >> b;

    if (b >= skok) {
        cout << "Blad: Koniec okresu nie moze byc wiekszy niz liczba skokow." << endl;
        delete[] dlugoscSkoku;
        return 1;
    }

    for (int i = a; i < b; ++i) {
        if (dlugoscSkoku[i] <= dlugoscSkoku[i + 1]) {
            continue;
        } else {
            cout << "Nic z tego - za malo bananow" << endl;
            delete[] dlugoscSkoku;
            return 2;
        }
    }

    cout << "TAK - jedziemy na zawody" << endl;
    //czekajNaKlawisz();
    
    delete[] dlugoscSkoku;

    return 0;
}

