#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int i = 33; i <= 255; ++i) {
        cout<< " kod znaku " << "\t" << i << "\t" <<(char)i;

        if (i % 3 == 0) {
            std::cout << "\n";
        }

        if (i % 20 == 0) {
            cout << "\nNacisnij dowolny klawisz, aby kontynuowac...";
            system("PAUSE");
            system("cls");
        }
    }

    return 0;
}

//cout<<(char)i<<"\n";
