#include "holberton.h"

/**
* puts_half - entry point.
* @str: string of numbers.
* Return: void.
*/

void puts_half(char *str)
{
	int i = 0, k;

	while (*(str + i))
		i++;

	k = i / 2;

	while (*(str + k))
	{
		putchar(*(str + k));
		k++;
	}
	putchar('\n');
}
