#include "holberton.h"

/**
* _print_rev_recursion - entry point.
* @s: char pointer.
* Return: void.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
