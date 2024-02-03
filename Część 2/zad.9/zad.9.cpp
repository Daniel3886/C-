#include <iostream>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
	system("chcp 1250");
	int cze;
	printf("Podaj liczbe naturaln¹: ");
	scanf("%d", &cze);
	
	printf("wczytana liczba x= %d\n", cze);
	printf("kwadrat liczby x= %d %d^2=%d\n",cze,cze,cze*cze);
	printf("szeœcian liczba x= %d %d^3=%d\n",cze,cze,cze*cze*cze);	
	return 0;
}
