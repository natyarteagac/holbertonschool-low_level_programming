#include "holberton.h"

/**
* jack_bauer - entry point.
*
* @a, b, c, d, e, f, turn the hours and the minutes.
*
*/

void jack_bauer(void)
{
	int a, b, c, d, e, f;

	for (a = 0; a < 24; a++)
	{

		for (b = 0; b < 60; b++)
		{
			c = a / 10;
			d = a % 10;
			e = b / 10;
			f = b % 10;

			_putchar(c + '0');
			_putchar(d + '0');
			_putchar(':');
			_putchar(e + '0');
			_putchar(f + '0');
			_putchar('\n');
		}
	}
}
