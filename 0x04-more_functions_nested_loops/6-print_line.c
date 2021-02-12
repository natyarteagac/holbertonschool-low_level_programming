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

	if (n < 0)
	{
		_putchar('\n');
	}

	for (lin = 1; lin <= n; lin++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
