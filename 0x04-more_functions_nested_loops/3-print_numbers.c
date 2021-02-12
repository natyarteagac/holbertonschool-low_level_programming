#include "holberton.h"

/**
* print_numbers - entry point.
*
* Return: 0.
*/

void print_numbers(void)
{

	int a = 0;

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');

}
