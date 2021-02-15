#include "holberton.h"

/**
* print_line - entry point.
*
* @n: print the number to evaluate.
*
* Return: 0.
*/

void print_line(int n)
{
	int lin;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lin = 0; lin <= n; lin++)
		{
			_putchar('_');
		}
	}
}
