#include<iostream>

using namespace std;

int main()
{
	system("chcp 1250");
	printf("wprowadzam liczb� x w postaci dziesi�tnej\n");
	printf("podaj liczb� x: ");
	int x;
	scanf("%d", &x);
	
	printf("wczytana liczba = %d liczba w formie szesnatstkowej wynosi = %x\n", x, x);
	printf("liczba w formie osemkowej wynosi = %o", x);	
	return 0;
}
