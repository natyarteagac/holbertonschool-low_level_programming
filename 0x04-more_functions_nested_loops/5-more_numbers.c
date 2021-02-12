#include "holberton.h"

/**
* more_numbers - entry point.
*
* Return: 0.
*/

void more_numbers(void)
{
	int lin, num, dec, unit;

	for (lin = 0; lin <= 9; lin++)
	{
		for (num = 0; num <= 14; num++)
		{
		if (num > 9)
		{
			dec = num / 10;
			_putchar(dec + '0');
		}
		unit = num % 10;
		_putchar(unit + '0');
		}
	_putchar('\n');
	}
}
