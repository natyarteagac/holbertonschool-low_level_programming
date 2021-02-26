#include "holberton.h"

/**
* _puts_recursion - entry point.
* @s: char pointer.
* Return: no return.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
