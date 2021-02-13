#include <stdio.h>

/**
* main - entry point.
* Return: 0.
*/

int main(void)
{
	int decenas, unidades;

	for (decenas = 0; decenas <= 9; decenas++)
	{

		for (unidades = 0; unidades <= 9; unidades++)
		{
			putchar(decenas + '0');
			putchar(unidades + '0');
			if (decenas != 9 || unidades != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
