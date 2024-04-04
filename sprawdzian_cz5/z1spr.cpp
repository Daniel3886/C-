#include <iostream>

using namespace std;

const int N = 3;
const int M = 2;

void wczytaj_macierz(int macierz[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "podaj element macierzy [" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }
}

void wypisz_macierz(int macierz[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int D[N][M];
    int G[N][M];
    int E[N][M];
    int wyrazy_wieksze = 0, wyrazy_mniejsze = 0, wyrazy_rowne = 0;

    cout << "Wczytaj macierz D:" << endl;
    wczytaj_macierz(D);

    //cout << "Wczytaj macierz E:" << endl;
    wczytaj_macierz(E);

    cout << "Macierz D:" << endl;
    wypisz_macierz(D);

    cout << "Macierz E:" << endl;
    wypisz_macierz(E);

    cout << "Macierz G:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            G[i][j] = 4 * E[i][j] - 2 * D[i][j];
            cout << G[i][j] << " ";
            if (G[i][j] > 2) {
                wyrazy_wieksze++;
            } else if (G[i][j] < 2) {
                wyrazy_mniejsze++;
            } else {
                wyrazy_rowne++;
            }
        }
        cout << endl;
    }

    cout << "Liczba wyrazow wiekszych od 2 =" << wyrazy_wieksze << endl;
    cout << "Liczba wyrazow mniejszych od 2 =" << wyrazy_mniejsze << endl;
    cout << "Liczba wyrazów równych 2 =" << wyrazy_rowne << endl;

    return 0;
}
