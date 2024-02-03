#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

void setcolor(WORD color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color |
		FOREGROUND_INTENSITY);
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int weightEnter(int numWeight) {
	cout << "Podaj wagê " << numWeight << " ciê¿arka: ";
	int weight;
	cin >> weight;
	return weight;
}


int main() {
	system("chcp 1250");
	system("cls");

	int weight1, weight2, weight3, weight4, weightsSum, wagaTowaru;
	bool prawidlowaWaga = true;

	do {
		cout << "Suma ciê¿rków musi byæ 40 kg i wagi cie¿arków musi roznic siê i waga ciezarkow ma byc > 0" << endl;
		prawidlowaWaga = true;
		weight1 = weightEnter(1);
		if (weight1 == 0)
			prawidlowaWaga = false;

		weight2 = weightEnter(2);
		if (weight2 == weight1 || weight2 == 0)
			prawidlowaWaga = false;

		weight3 = weightEnter(3);
		if (weight3 == weight1 || weight3 == weight2 || weight3 == 0)
			prawidlowaWaga = false;

		weight4 = weightEnter(4);
		if (weight4 == weight1 || weight4 == weight2 || weight4 == weight3 || weight4 == 0)
			prawidlowaWaga = false;

		weightsSum = weight1 + weight2 + weight3 + weight4;
	} while (weightsSum != 40 || !prawidlowaWaga);

	setcolor(12);
	cout << "Uwaga! \nTowar wazymy na szalce prawej" << endl;
	setcolor(15);

	do  {
		cout << "Podaj wage towaru do 40kg: ";
		cin >> wagaTowaru;
	} while (wagaTowaru > 40 && wagaTowaru < 0);


	float leftSzalka = 0;
	float rightSzalka = wagaTowaru;

	bool congratulations = false;

	vector<int> wykorystaneCiezarky;
	int jakiCiezarek;
	bool szalka;
	bool pierwszyCiezarek = true;
	bool poprawnoscCiezarka = true;
	do {
		do
		{
			do {
				cout << "1 ciezarek: " << weight1 << " kg" << endl;
				cout << "2 ciezarek: " << weight2 << " kg" << endl;
				cout << "3 ciezarek: " << weight3 << " kg" << endl;
				cout << "4 ciezarek: " << weight4 << " kg" << endl;
				cout << "Jaki ciezarek chcesz zwarzyc(1-4): ";
				cin >> jakiCiezarek;
			} while (jakiCiezarek < 1 && jakiCiezarek > 4);

			while (!pierwszyCiezarek) {
				for (int i = 0; i < wykorystaneCiezarky.size(); i++) {
					if (jakiCiezarek == wykorystaneCiezarky[i]) {
						cout << "Ten ciezarek juz zostal uzywany, wybierz inny" << endl;
						poprawnoscCiezarka = false;
					}
					else
						poprawnoscCiezarka = true;
				}
				break;
			}
			pierwszyCiezarek = false;

			if (poprawnoscCiezarka) {
				wykorystaneCiezarky.push_back(jakiCiezarek);
				cout << "Do jakiej szalce chzecz dodac ciezarek(0 - lewa; 1 - prawa): ";
				cin >> szalka;

				switch (jakiCiezarek)
				{
				case 1:
					if (szalka) rightSzalka += weight1;
					else leftSzalka += weight1;
					break;
				case 2:
					if (szalka) rightSzalka += weight2;
					else leftSzalka += weight2;
					break;
				case 3:
					if (szalka) rightSzalka += weight3;
					else leftSzalka += weight3;
					break;
				case 4:
					if (szalka) rightSzalka += weight4;
					else leftSzalka += weight4;
					break;
				}
				system("cls");
				gotoxy(80, 30 + (leftSzalka - rightSzalka) / 4);
				setcolor(14);
				cout << "     ***   " << leftSzalka << endl;
				gotoxy(80, 31 + (leftSzalka - rightSzalka) / 4);
				cout << "    *****    " << endl;
				gotoxy(80, 32 + (leftSzalka - rightSzalka) / 4);
				cout << "     |||     " << endl;
				gotoxy(80, 33 + (leftSzalka - rightSzalka) / 4);
				cout << "  *********  " << endl;
				gotoxy(80, 34 + (leftSzalka - rightSzalka) / 4);
				cout << "  *********  " << endl;
				gotoxy(80, 35 + (leftSzalka - rightSzalka) / 4);
				cout << "  *********  " << endl;
				gotoxy(80, 36 + (leftSzalka - rightSzalka) / 4);
				setcolor(15);
				cout << "*************" << endl;

				gotoxy(100, 30 + (rightSzalka - leftSzalka) / 4);
				setcolor(9);
				cout << "     ***   " << rightSzalka << endl;
				gotoxy(100, 31 + (rightSzalka - leftSzalka) / 4);
				cout << "    *****    " << endl;
				gotoxy(100, 32 + (rightSzalka - leftSzalka) / 4);
				cout << "     |||     " << endl;
				gotoxy(100, 33 + (rightSzalka - leftSzalka) / 4);
				cout << "  *********  " << endl;
				gotoxy(100, 34 + (rightSzalka - leftSzalka) / 4);
				cout << "  *********  " << endl;
				gotoxy(100, 35 + (rightSzalka - leftSzalka) / 4);
				cout << "  *********  " << endl;
				gotoxy(100, 36 + (rightSzalka - leftSzalka) / 4);
				setcolor(15);
				cout << "*************" << endl;
			}

			if (rightSzalka == leftSzalka) {
				congratulations = true;
				setcolor(10);
				cout << "BRAWO!!! Ciebie udalo sie zwazyc towar!!";
				Beep(784, 300);
				Beep(880, 300);
				Beep(987, 300);
				Beep(1175, 600);

				Beep(987, 300);
				Beep(880, 300);
				Beep(784, 600);

				Beep(784, 300);
				Beep(880, 300);
				Beep(987, 300);
				Beep(1175, 600);

				Beep(987, 300);
				Beep(880, 300);
				Beep(784, 600);

				Beep(784, 300);
				Beep(880, 300);
				Beep(987, 300);
				Beep(1175, 300);
				Beep(1319, 300);
				Beep(1175, 300);
				Beep(987, 300);
				Beep(880, 300);

				Beep(784, 600);
				setcolor(15);
				return 0;
			}

		} while (wykorystaneCiezarky.size() < 4);
		cout << "Juz wykorzystal wszystki ciezarki, sprobuj ponownie " << endl;
	} while (!congratulations);
	


	return 0;
}
