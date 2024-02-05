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

void playSound(int frequency, int duration) {
    Beep(frequency, duration);
}

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main()
{
    int szerokosc = 5;
    int kolumna = 50;

    for (int z = 0; z < 6; z++)
    {
        Sleep(50);

        for (int h = 0; h < 9; h++)
        {
            setColor((z + h) % 6 + 1);
            playSound(300 + (z + h + 1) * 50, 50);
            gotoxy(kolumna + h, szerokosc);
            cout << "*" << endl;
        }

        for (int i = 0; i < 6; i++)
        {
            gotoxy(kolumna + 6 + (i * 3) + z, szerokosc + 1 + i);
            setColor((z + i) % 6 + 1);
            playSound(300 + (z + i + 1) * 50, 50);
            cout << "*" << endl;

            gotoxy(kolumna - 3 - (i * 3) + z, szerokosc + 1 + i);
            setColor((z + i) % 6 + 1);
            playSound(300 + (z + i + 1) * 50, 50);
            cout << "*" << endl;
        }

        int colors[] = {5, 1, 3, 2, 6, 4};  // Purple, Blue, Cyan, Green, Yellow, Red

        for (int j = 0; j < 8; j++)
        {
            gotoxy(kolumna + 22 + (j * 2) + z, szerokosc + 7 + j);
            setColor(colors[j % 6]);
            playSound(400 + (z + j + 1) * 50, 50);
            cout << "*" << endl;

            gotoxy(kolumna - 20 - (j * 2) + z, szerokosc + 7 + j);
            setColor(colors[j % 6]);
            playSound(450 + (z + j + 1) * 50, 50);
            cout << "*" << endl;
        }

        for (int a = 0; a < 5; a++)
        {
            gotoxy(kolumna + 37 + a + z, szerokosc + 15 + a);
            setColor(colors[a % 6]);
            playSound(500 + (z + a + 1) * 50, 50);
            cout << "*" << endl;

            gotoxy(kolumna - 35 - a + z, szerokosc + 15 + a);
            setColor(colors[a % 6]);
            playSound(550 + (z + a + 1) * 50, 50);
            cout << "*" << endl;
        }
    }

    return 0;
}

