#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1416
#define Area(r, h) (2*PI*r*(r+h))
#define Volumen(r, h) (PI*sqrt(r)*h)

void main()
{
	float h = 0, r = 0;
	printf("Introce los datos del cilindro\n");
	printf("Radio: ");
	scanf_s("%f", &r);
	printf("Altura: ");
	scanf_s("%f", &h);
	float area = Area(r, h);
	float volumen = Volumen(r, h);
	printf("Area %f\n", area);
	printf("Volumen %f\n", volumen);
	_getch();
}
