#include <conio.h>
#include <stdio.h>

void main()
{
	float inversionUno = 0, inversionDos = 0, inversionTres = 0,
		total = 0, procentajeUno = 0, porncetajeDos = 0, porcentajeTres = 0;

	printf("Inversion Uno: ");
	scanf_s("%f", &inversionUno);
	printf("Inversion Dos: ");
	scanf_s("%f", &inversionDos);
	printf("Inversion Dos: ");
	scanf_s("%f", &inversionTres);

	total = inversionUno + inversionDos + inversionTres;
	procentajeUno = total*(inversionUno / 100);
	porncetajeDos = total*(inversionDos / 100);
	porcentajeTres = total*(inversionTres / 100);

	printf("Porcentaje Uno: %f", procentajeUno);
	printf("Porcentaje Dos: %f", porncetajeDos);
	printf("Porcentaje Tres: %f", porcentajeTres);
	_getch();
}
