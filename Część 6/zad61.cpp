#include <cstdlib>
#include <iostream>
using namespace std;

void przekazWartosc(int x) {
	 system("chcp 1250");
    x = 2 * x;
    cout << "Wewn�trz funkcji (warto��): x=" << x << endl;
}

void przekazReferencje(int &x) {
	 system("chcp 1250");
    x = 2 * x;
    cout << "Wewn�trz funkcji (referencja): x=" << x << endl;
}

int main(int argc, char *argv[]) {
	 system("chcp 1250");
    int x = 10;

    przekazWartosc(x);
    cout << "Na zewn�trz funkcji (warto��): x=" << x << endl;

    przekazReferencje(x);
    cout << "Na zewn�trz funkcji (referencja): x=" << x << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

