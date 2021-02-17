#include "holberton.h"

/**
* print_rev - entry point.
* @s: pointer char.
*
* Return: no return.
*/

void print_rev(char *s)
{
	int i = 0;

	while(*(s + i))
	{
		i++;
	}
	i -= 1;
	while(i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
}
