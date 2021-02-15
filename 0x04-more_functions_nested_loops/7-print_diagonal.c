#include "holberton.h"

/**
* print_diagonal - entry point.
* @n: number to return the result.
*
* Return (0);
*/

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
				_putchar(92);
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
