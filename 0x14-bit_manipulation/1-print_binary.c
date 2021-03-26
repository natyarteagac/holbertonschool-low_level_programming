#include "holberton.h"

/**
* print_binary - entry point.
* @n: numbers to convert.
* Return: void.
*/

void print_binary(unsigned long int n)
{
	int i, k;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
		{

			_putchar('1');
		}
		else if (k != 0)
		{
			_putchar('0');
		}
	}
}
