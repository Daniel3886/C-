#include <iostream>
#include <Windows.h>
#include <dos.h>


using namespace std;

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void setcolor(WORD color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color |
		FOREGROUND_INTENSITY);
}

int main()
{
	cout << "Predkosci maks ogranicz do 280 km/h \n";

	cout << "Podaj marke samochodu: ";
	string carName1;
	cin >> carName1;
	cout << "Podaj maksymalna predkosc samochodu w km/h: ";
	int carSpeed1;
	cin >> carSpeed1;

	cout << "Podaj marke drugiego samochodu: ";
	string carName2;
	cin >> carName2;
	cout << "Podaj maksymalna predkosc drugiego samochodu w km/h: ";
	int carSpeed2;
	cin >> carSpeed2;
	
	cout << "Podaj marke trzeciego samochodu: ";
	string carName3;
	cin >> carName3;
	cout << "Podaj maksymalna predkosc trzeciego samochodu w km/h: ";
	int carSpeed3;
	cin >> carSpeed3;

	int carSpeed1_m_min = carSpeed1 * 1000 / 60;
	int carSpeed2_m_min = carSpeed2 * 1000 / 60;
	int carSpeed3_m_min = carSpeed3 * 1000 / 60;

	int carSpeed1_m_s = carSpeed1 * 5 / 18;
	int carSpeed2_m_s = carSpeed2 * 5 / 18;
	int carSpeed3_m_s = carSpeed3 * 5 / 18;


	cout << "\nMaksymalna predkosc " << carName1 << " =" << carSpeed1_m_min <<
		"m/min lub " << carSpeed1_m_s << "m/s";
	cout << "\n\nMaksymalna predkosc " << carName2 << " =" << carSpeed2_m_min <<
		"m/min lub " << carSpeed2_m_s << "m/s";
	cout << "\n\nMaksymalna predkosc " << carName3 << " =" << carSpeed3_m_min <<
		"m/min lub " << carSpeed3_m_s << "m/s\n";

	cout << "*\n";
	cout << "*\n";
	cout << "*\n";
	cout << "*\n";
	cout << "*\n";
	cout << "*\n";
	cout << "*\n";
	cout << "******************************************************************************\n";
	cout << "     5    10   15   20   25   30   35   40   45   50   55   60   65   70   75\n";

	gotoxy(carSpeed3_m_s + 1, 14);
	setcolor(12);
	cout << "\a*  " << carName3;
	Sleep(1000);

	gotoxy(carSpeed2_m_s + 1, 16);
	setcolor(14);
	cout << "\a*  " << carName2;
	Sleep(1000);

	gotoxy(carSpeed1_m_s + 1, 18);
	setcolor(10);
	cout << "\a*  " << carName1;
	Sleep(1000);


	gotoxy(10, 22);
	return 0;
}
