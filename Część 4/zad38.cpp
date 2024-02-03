#include <iostream>
#include <cstdlib>
#include <windows.h> 

using namespace std;

void gotoxy(int x, int y) 
{ 
    COORD coord; 
    coord.X = x; 
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}

int main()
{
	int number;
	cout<<"Podaj Twoj numer dzienniku: ";
	cin>>number;
	int wiersz = 5 + (number/3);
	int kolumna = 11 + (8/2);
	
	for (int i = 0; i < 31; i++)
    {
        
        gotoxy(kolumna, wiersz);
        cout << "D" <<endl;
        gotoxy(kolumna-1, wiersz);
        cout << "*"<< endl;
        gotoxy(kolumna-2, wiersz);
        cout << "*"<< endl;
        gotoxy(kolumna-3, wiersz);
        cout << "*"<< endl;
        gotoxy(kolumna-4, wiersz);
        cout << "*"<< endl;
        gotoxy(kolumna-5, wiersz);
        cout << "*"<< endl;
        gotoxy(kolumna-5, wiersz+1);
        cout << "*"<< endl;
        gotoxy(kolumna-5, wiersz+2);
        cout << "*"<< endl;
        gotoxy(kolumna-5, wiersz+3);
        cout << "*"<< endl;
         gotoxy(kolumna-5, wiersz+4);
        cout << "*"<< endl;
         gotoxy(kolumna-5, wiersz+5);
        cout << "*"<< endl;
        gotoxy(kolumna, wiersz+1);
        cout << "*"<< endl;
        gotoxy(kolumna, wiersz+2);
        cout << "*"<< endl;
        gotoxy(kolumna, wiersz+3);
        cout << "*"<< endl;
        gotoxy(kolumna, wiersz+4);
        cout << "*"<< endl;
        gotoxy(kolumna, wiersz+5);
        cout << "*"<< endl;
        gotoxy(kolumna-1, wiersz+5);
        cout << "*"<< endl;
        gotoxy(kolumna-2, wiersz+5);
        cout << "*"<< endl;
        gotoxy(kolumna-3, wiersz+5);
        cout << "*"<< endl;
        gotoxy(kolumna-4, wiersz+5);
        cout << "*"<< endl;
        gotoxy(kolumna-5, wiersz+5);
        cout << "*"<< endl;
    }
	return 0;
}
//wiersz => 5+ (8/3)=7,666666666666667
//kolumna =>11 + (8/2) = 15
