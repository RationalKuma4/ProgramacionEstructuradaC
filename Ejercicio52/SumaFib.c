#include <stdio.h>
#include <conio.h>

void main()
{
	int limite = 0, display = 0, anterior = 0, actual = 1;
	printf("Introuzca el limite: ");
	scanf_s("%d", &limite);

	printf("%d\n%d\n", anterior, actual);
	while (display <= limite)
	{
		display = anterior + actual;
		printf("%d\n", display);
		anterior = actual;
		actual = display;
	}
	_getch();
}