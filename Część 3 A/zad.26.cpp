#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

void setcolor(WORD color)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color|
FOREGROUND_INTENSITY);
}

int main()
{
	system("chcp 1250");
	system("cls");
	
	vector<int> num(4, 0);
	int n;
	
	cout << "podaj wartosc liczby A: ";
	cin >> num[0];
	cout << "\npodaj wartosc liczby B: ";
	cin >> num[1];
	cout << "\npodaj wartosc liczby C: ";
	cin >> num[2];
	
	while(num[0]==num[1] || num[1]==num[2] || num[0]==num[2])
	{
	setcolor(12);
	cout << "liczby o tej samej wartooci podaj ponownie wartooci liczb\n";
	setcolor(15);
	cout << "podaj wartosc liczby A: ";
	cin >> num[0];
	cout << "\npodaj wartosc liczby B: ";
	cin >> num[1];
	cout << "\npodaj wartosc liczby C: ";
	cin >> num[2];
	}
	
	for(int i = 0; i < num.size()-1; i++)
	{
		for(int j = i+1; j < num.size(); j++)
		{
			if(num[i] > num [j])
			{
				n = num[i]; 
				num[i] = num[j];
				num[j] = n;
			}
		}
	}
	cout << "Najwieksza = " <<num[1] << endl;
	cout << "srednia = " << num[2] << endl;
	cout << "Najmniejsza = " << num[3] << endl;
	
	return 0;	
}
