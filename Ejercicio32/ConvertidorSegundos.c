#include <stdio.h>
#include <conio.h>

#define HORAS_SEGUNDOS 3600
#define MINUTOS_SEGUNDOS 60

void main()
{
	int segundos = 0;
	int dSegundos = 0, dMinutos = 0, dHoras = 0;
	printf("Escibe la cantidad de segundos a convertir: ");
	scanf_s("%d", &segundos);

	while (segundos >= MINUTOS_SEGUNDOS || segundos >= HORAS_SEGUNDOS)
	{
		if (segundos >= HORAS_SEGUNDOS)
		{
			dHoras++;
			segundos -= HORAS_SEGUNDOS;
		}
		else if (segundos >= MINUTOS_SEGUNDOS)
		{
			dMinutos++;
			segundos -= MINUTOS_SEGUNDOS;
		}
		dSegundos = segundos;
	}

	printf("%d : %d : %d\n", dHoras, dMinutos, dSegundos);
	_getch();
}
