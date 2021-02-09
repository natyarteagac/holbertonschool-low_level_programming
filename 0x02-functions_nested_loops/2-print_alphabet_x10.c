#include "holberton.h"

/**
* print_alphabet_x10 - entry point.
*
* void: without return code.
*/

void print_alphabet_x10(void)
{

	int a, alp;

		for (a = 0; a <= 9; a++)
		{

			for (alp = 'a'; alp <= 'z'; alp++)
			{
				_putchar(alp);
			}
		_putchar('\n');
		}

}
