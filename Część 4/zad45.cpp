#include <iostream>

using namespace std;

int main() {
    const int rozmiar = 7;

    cout << "Tabliczka mnozenia do 7:" << endl;
cout<<" | 1\t2\t3\t4\t5\t6\t7\n";
cout<<"==================================================\n"; 
    for (int i = 1; i <= rozmiar; i++) {
    	cout<<i <<"| ";
        for (int j = 1; j <= rozmiar; j++) {
            cout << i * j << "\t";
        }
    
        cout << endl;
    }

    return 0;
}

