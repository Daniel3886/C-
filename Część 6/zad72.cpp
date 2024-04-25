#include <iostream>

using namespace std;

// Funkcja rekurencyjna generuj¹ca wszystkie mo¿liwe kombinacje rabatów
void generujKombinacje(int n, int k, int* kombinacja, int index, int& liczbaRabatow) {
    if (index == k) {
        // Jeœli osi¹gnêliœmy d³ugoœæ k, zwiêkszamy liczbê rabatów
        liczbaRabatow++;
        return;
    }

    // Iterujemy przez wszystkie odmiany kwiatów
    for (int i = 1; i <= n; i++) {
        kombinacja[index] = i;
        generujKombinacje(n, k, kombinacja, index + 1, liczbaRabatow);
    }
}

// Funkcja obliczaj¹ca iloœæ rabatów mo¿liwych do obsadzenia
int iloscRabatow(int n, int k) {
    // Sprawdzamy czy dane mieszcz¹ siê w przedziale (0 < k < n)
    if (n <= 0 || k <= 0 || k >= n) {
        cout << "B³¹d: Niepoprawne dane wejœciowe." << endl;
        return 0;
    }

    int* kombinacja = new int[k]; // Tablica przechowuj¹ca kombinacjê kwiatów w rabacie
    int liczbaRabatow = 0; // Liczba rabatów

    // Generujemy kombinacje rekurencyjnie
    generujKombinacje(n, k, kombinacja, 0, liczbaRabatow);

    delete[] kombinacja;

    return liczbaRabatow;
}

int main() {
    int n, k;
    bool poprawneDane = false;

    do {
    	cout << "Pamietaj aby dane miescily sie w predziale (0 < k < n)" << endl;
        cout << "Podaj ilosc odmian n: ";
        cin >> n;
        cout << "Podaj ilosc kwiatow k: ";
        cin >> k;

        if (n > 0 && k > 0 && k < n) {
            poprawneDane = true;
        }
    } while (!poprawneDane);

    int liczbaRabatow = iloscRabatow(n, k);
    cout << "Ilosc rabatow mozliwych do obsadzenia: " << liczbaRabatow << endl;

    return 0;
}

