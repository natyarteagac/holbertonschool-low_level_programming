#include "holberton.h"
/**
* print_sign - starting point.
*
* @n: prints the number required.
*
* Return: -1, 0, 1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}

	else if (n == 0)
	{
		_putchar('0');
		return ('0');
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
}
