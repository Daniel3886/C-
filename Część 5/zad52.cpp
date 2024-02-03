#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	 system("chcp 1250");
    const int n = 7;
    int t[n];

    for(int i = 0; i < n; ++i){
        cout << "Podaj t[" << i << "]= ";
        cin >> t[i];
    }

    cout << "wygl¹d wprowadzonej tablicy t: \n";
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }

    int zmiana;

    do {
        zmiana = 0;

        for (int i = 0; i < n-1; ++i) {
            if (t[i] > t[i+1]) {
                // Zamiana miejscami
                int schowek = t[i];
                t[i] = t[i+1];
                t[i+1] = schowek;
                zmiana += 1;
            }
        }

    } while (zmiana != 0);

    // Wyœwietlenie posortowanej tablicy
    cout << "\nwygl¹d posortowanej rosn¹co tablicy t: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }

    return 0;
}

