#include <iostream>
#include <vector>

using namespace std;

int main() {
    int month;
    cout << "Podaj miesi�c Twojego urodzenia: ";
    cin >> month;

    int size = 8 + month;

    vector<double> grades(size);

    // Wczytywanie ocen
    cout << "Podaj oceny:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "podaj " << i + 1 << " ocen� = ";
        cin >> grades[i];
    }

    // Wypisywanie wczytanego ci�gu
    cout << "Tablica wprowadzonych ocen: ";
    for (int i = 0; i < size; ++i) {
        cout << grades[i] << " ";
    }
    cout << endl;

    // Obliczanie �redniej ocen
    double sum = 0;
    double max_grade = grades[0];
    double min_grade = grades[0];

    for (int i = 0; i < size; ++i) {
        sum += grades[i];
        if (grades[i] > max_grade) {
            max_grade = grades[i];
        }
        if (grades[i] < min_grade) {
            min_grade = grades[i];
        }
    }

    double average = sum / size;

    // Wypisywanie wynik�w
    cout << "Najlepsza ocena: " << max_grade << endl;
    cout << "Najgorsza ocena: " << min_grade << endl;
    cout << "�rednia " << size << " podanych ocen wynosi: " << average << endl;

    return 0;
}


