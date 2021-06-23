#include "holberton.h" 

/*
* print_times_table - entry point.
* @n: number variable.
* Return: void.
*/

void print_times_table(int n)
{
	int a, b, c, d, e, f, g;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				d = c / 10;
				e = c % 10;
				f = d / 10;
				g = d % 10;
			if (c <= 9)
			{
				putchar(c + '0');
				if (b == n)
				{
				break;
				}
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(' ');
				}
			else if (c > 9 && c <= 99)
			{
				putchar(d + '0');
				putchar(e + '0');
				if (b == n)
				{
				break;
				}
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			else if (c > 99)
			{
				putchar(f + '0');
				putchar(g + '0');
				putchar(e + '0');
				if (b == n)
				{
				break;
				}
				putchar(',');
				putchar(' ');
			}
			}
	putchar('\n');
		}
	}
}
