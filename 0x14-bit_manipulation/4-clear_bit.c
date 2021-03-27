#include "holberton.h"

/**
* clear_bit - entry point.
* @n: pointer to numbers.
* @index: index to numbers.
* Return: 1 or -1.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (index == 32)
		return (-1);


	if (*n & 1 << index)
	{
		x = 1 << index;

		*n = *n ^ x;
	}

	return (1);
}
