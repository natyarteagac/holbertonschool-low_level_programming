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

	if (k % 2 == 0)
		k = k + 1;

	while (k < i)
	{
		putchar(*(str + k));
		k++;
	}
	putchar('\n');
}
