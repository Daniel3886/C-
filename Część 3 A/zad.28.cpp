#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("cls");

    char podaj;

    cout << "Dzie� dobry" << endl;
    cout << endl;

    goto pytanie_1;

    tutaj_1:

    cout << "Jestem u g�ry" << endl;

    pytanie_1:

    cout << "Je�li chcesz sko�czy� wci�nij klawisz y lub Y" << endl;
    cout << "Podaj jaki� znak: ";

    cin >> podaj;

    cout<<endl;
    
    podaj = tolower(podaj);

    if (podaj != 'y')
    {
        cout<<"Jestem na dole"<<endl;
        
        goto tutaj_1;
    }
    else if (podaj == 'y')
    {
        goto koniec_1;
    }
    
	koniec_1:

    return 0;
}
