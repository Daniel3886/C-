#include <iostream>

using namespace std;

int main() {
    system("chcp 1250");

    int IloscZmian = 0;
    int a[10];
    int n;

    cout << "Pamiêtaj, ¿e iloœæ podanych elementów tablicy a[] nie przekroczy 10!" << endl;
    cout << "Podaj iloœæ elementów tablicy a: ";
    
    cin >> n;

    if (n > 10) {
        cout << "Iloœæ elementów tablicy a[] nie powinna przekroczyæ 10!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Podaj a[" << i << "]: ";
        cin >> a[i];

        if (i > 0 && ((a[i - 1] > 0 && a[i] < 0) || (a[i - 1] < 0 && a[i] > 0))) {
            IloscZmian += 1;
        }
    }

    cout << "Iloœæ zmian znaków: " << IloscZmian << endl;

    return 0;
}
