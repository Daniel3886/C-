#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	system("chcp 1250");
	
	const int cze_c = 30;
	const double cze_PI = 3.1416;
	double cze_a;
	
	printf("podaj bok a tró³jakata: ");
	scanf("%lf", &cze_a);

	double cze_b = sqrt(pow(cze_c, 2) - pow(cze_a, 2));
	printf("Bok tró³jkata = %.3lf cm\n", cze_b);

	double cze_pole = (cze_a*cze_b)/2;
	printf("Pole tró³jkata = %.3lf cm^2\n", cze_pole);

	double cze_cos_alfa = cze_b/cze_c;
	printf("Cosinus alfa = %.3lf\n", cze_cos_alfa);

	double cze_sin_alfa = cze_a / cze_c;
	printf("Sinus alfa = %.3lf\n", cze_sin_alfa);

	double cze_tg_alfa = cze_a / cze_b;
	printf("Tangens alfa = %.3lf\n", cze_tg_alfa);

	double cze_alfa = atan(cze_tg_alfa)*180/cze_PI;
	printf("K¹t alfa = %.3lf stopni\n", cze_alfa);


	return 0;
}
