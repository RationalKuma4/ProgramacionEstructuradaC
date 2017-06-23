#include <stdio.h>
#include <conio.h>

void main()
{
	int flagSigno = 0;
	float resultante = 0;
	for (int i = 1; i <= 20; ++i)
	{
		if (i % 2 == 0) continue;
		if (flagSigno == 0)
		{
			float r = 4 / (float)i;
			resultante += r;
			flagSigno = 1;
		}
		else if (flagSigno == 1)
		{
			float r = 4 / (float)i;
			resultante += -1 * r;
			flagSigno = 0;
		}
	}

	printf("%f", resultante);
	_getch();
}
