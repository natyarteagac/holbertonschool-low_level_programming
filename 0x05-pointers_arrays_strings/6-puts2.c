#include "holberton.h"

/**
* puts2 - entry point.
* @str: string 0 to 9.
* Return: no return.
*/

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
