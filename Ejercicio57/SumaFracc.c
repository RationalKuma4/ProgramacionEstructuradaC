#include <conio.h>
#include <stdio.h>

void main()
{
	float resultante = 0;
	for (int i = 2; i < 20; ++i)
	{
		float r = 1 / (float)i;
		resultante += r;
		printf("%f\n", resultante);
	}
	_getch();
}