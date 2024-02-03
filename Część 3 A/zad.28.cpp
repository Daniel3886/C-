#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("cls");

    char podaj;

    cout << "Dzieñ dobry" << endl;
    cout << endl;

    goto pytanie_1;

    tutaj_1:

    cout << "Jestem u góry" << endl;

    pytanie_1:

    cout << "Jeœli chcesz skoñczyæ wciœnij klawisz y lub Y" << endl;
    cout << "Podaj jakiœ znak: ";

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
