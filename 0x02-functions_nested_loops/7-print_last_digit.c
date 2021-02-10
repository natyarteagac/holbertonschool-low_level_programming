#include "holberton.h"

/**
* print_last_digit - start point.
*
* @r: Print the digit.
*
* Return: Always a;
*/

int print_last_digit(int r)
{
	int z;

	if (r > 0)
	{
		z = r % 10;
		_putchar(z + '0');
		return (z);
	}
	else
	{
		r = r * -1;
		z = r % 10;
		_putchar(z + '0');
		return (z);
	}
}
