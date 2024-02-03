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

	printf("Podaj wagê jab³ek w gramach: ");
	scanf("%lf", &cze_apples_weight);

	printf("Podaj wagê gruszek w tonach: ");
	scanf("%lf", &cze_pears_weight);

	printf("Podaj cenê jab³ek w kilogramach: ");
	scanf("%lf", &cze_apples_price);

	printf("Podaj cenê gruszek w kilogramach: ");
	scanf("%lf", &cze_pears_price);

	printf("wartoœæ jab³ek    = \t %.2lf kg * %.2lf z³‚ \t =  \t%.2lf z³‚\n",
		cze_apples_weight / 1000, cze_apples_price, cze_apples_weight / 1000 * cze_apples_price);

	printf("wartoœæ gruszek   = \t %.2lf kg * %.2lf z³‚ \t =  \t%.2lf z³‚\n",
		cze_pears_weight * 1000, cze_pears_price, cze_pears_weight * 1000 * cze_pears_price);
	double cze_suma= cze_apples_weight / 1000 * cze_apples_price +  cze_pears_weight * 1000 * cze_pears_price;
	printf("\t\t\t\t\t suma \t = \t %.2lf z³‚ \n", cze_suma);

	return 0;
}
