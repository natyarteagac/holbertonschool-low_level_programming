#include <stdio.h>

/**
* main - entry point.
*
* Return: 0.
*/

int main(void)
{
	int a, b, first, second, third, fourth;

	for (a = 0; a <= 99; a++)
	{
		first = a / 10;
		second = a % 10;

		for (b = a + 1; b <= 99; b++)
		{
			third = b / 10;
			fourth = b % 10;
			putchar(first + '0');
			putchar(second + '0');
			putchar(' ');
			putchar(third + '0');
			putchar(fourth + '0');
			if (first == 9 && second == 8 && third == 9 && fourth == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
