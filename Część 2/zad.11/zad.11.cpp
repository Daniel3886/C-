#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <windows.h>


using namespace std;


int main()
{
	system("color 16");
	const double cze_PI = 3.1416;
	system("chcp 1250");
	double cze_Ax, cze_Ay, cze_Bx, cze_By, cze_Cx, cze_Cy, cze_Dx, cze_Dy; 
	
	printf("Podaj koordinaty punktu A(przez Enter): ");
	scanf("%lf", &cze_Ax);
	scanf("%lf", &cze_Ay);
	
	printf("Podaj koordinaty punktu B(przez Enter): ");
	scanf("%lf", &cze_Bx);
	scanf("%lf", &cze_By);
	
	printf("Podaj koordinaty punktu C(przez Enter): ");
	scanf("%lf", &cze_Cx);
	scanf("%lf", &cze_Cy);
	
	printf("Podaj koordinaty punktu D(przez Enter): ");
	scanf("%lf", &cze_Dx);
	scanf("%lf", &cze_Dy);
	
	printf("A (%.2lf, %.2lf)\n", cze_Ax, cze_Ay);
	printf("B (%.2lf, %.2lf)\n", cze_Bx, cze_By);
	printf("C (%.2lf, %.2lf)\n", cze_Cx, cze_Cy);
	printf("D (%.2lf, %.2lf)\n", cze_Dx, cze_Dy);
	
	double cze_ABx =  cze_Bx-cze_Ay;
	double cze_ABy =  cze_By-cze_Ax;
	
	double cze_CDx =  cze_Dx-cze_Cy;
	double cze_CDy =  cze_Dy-cze_Cx;
	
	printf("Wspó³rzêdne wektora AB wynosz¹: [%.3lf; %.3lf]\n", cze_ABx, cze_ABy);
	printf("Wspó³rzêdne wektora CD wynosz¹: [%.3lf; %.3lf]\n", cze_CDx, cze_CDy);
	
	double cze_dAB = sqrt(cze_ABx*cze_ABx+cze_ABy*cze_ABy);
	double cze_dCD = sqrt(cze_CDx*cze_CDx+cze_CDy*cze_CDy);
	
	printf("dv1= %.3lf\n", cze_dAB);
	printf("dv1= %.3lf\n", cze_dCD);
	
	double cze_dBD = sqrt(cze_dAB*cze_dAB-cze_dCD*cze_dCD);
	
	double cze_cos_alfa = cze_dCD/cze_dAB;
	double cze_sin_alfa = cze_dBD/cze_dAB;
	double cze_tan_alfa = cze_sin_alfa/cze_cos_alfa;
	double cze_alfa_x = atan(cze_tan_alfa);
	double cze_alfa_deg = atan(cze_tan_alfa)*180/cze_PI;
	
	printf("cos_alfa= %.3lf\n", cze_cos_alfa);
	printf("sin_alfa= %.3lf\n", cze_sin_alfa);
	printf("tan_alfa= %.3lf\n", cze_tan_alfa);
	printf("alfa_x= %.3lf\n", cze_alfa_x);
	printf("K¹t miêdzy wektorami AB oraz CD wynosi: %.1lf stopni\n", cze_alfa_deg);
	
	
	
	
	return 0;
}
