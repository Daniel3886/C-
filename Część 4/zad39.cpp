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
	int x,y,d;
	cout<<"Podaj zmienna (kolumne ekranu)x= ";
	cin>>x;
	cout<<"Podaj zmienna (kolumne ekranu)y= ";
	cin>>y;
	cout<<"Podaj dlugosc linii D= ";
	cin>>d;
	int start = x-d/2;
	int end = x+d/2;
	
	gotoxy(start,y);
	
	for(int i = start; i <= end; i++)
	{
		if(x==i)
		{
			cout<<"0";
		}
		else
		cout<<"-";
	}
	return 0;
}
