#include <stdio.h>
#include <conio.h>

void main()
{
	int valor = 0;
	for (int i = 10; i <= 125; i++)
	{
		valor += i;
		printf("%d\n", valor);
	}
	_getch();
}