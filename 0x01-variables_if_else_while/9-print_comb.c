#include <stdio.h>

/**
* main - entry point.
* Return: 0.
*/

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a <= 8)
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(a + '0');
		}
	}
	return (0);
}
