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
		if (i % 2 == 0)
		{
		_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
