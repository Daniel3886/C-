#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	system("chcp 1250");
	double cze_apples_weight, cze_pears_weight, cze_apples_price, cze_pears_price;

	printf("Podaj wag� jab�ek w gramach: ");
	scanf("%lf", &cze_apples_weight);

	printf("Podaj wag� gruszek w tonach: ");
	scanf("%lf", &cze_pears_weight);

	printf("Podaj cen� jab�ek w kilogramach: ");
	scanf("%lf", &cze_apples_price);

	printf("Podaj cen� gruszek w kilogramach: ");
	scanf("%lf", &cze_pears_price);

	printf("warto�� jab�ek    = \t %.2lf kg * %.2lf z�� \t =  \t%.2lf z��\n",
		cze_apples_weight / 1000, cze_apples_price, cze_apples_weight / 1000 * cze_apples_price);

	printf("warto�� gruszek   = \t %.2lf kg * %.2lf z�� \t =  \t%.2lf z��\n",
		cze_pears_weight * 1000, cze_pears_price, cze_pears_weight * 1000 * cze_pears_price);
	double cze_suma= cze_apples_weight / 1000 * cze_apples_price +  cze_pears_weight * 1000 * cze_pears_price;
	printf("\t\t\t\t\t suma \t = \t %.2lf z�� \n", cze_suma);

	return 0;
}
