#include "holberton.h"

/**
* set_bit - entry point.
* @n: pointer to number.
* @index: index of bits.
* Return: 1 if works or -1 if dont works.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (index > 32)
		return (-1);

	x = 1 << index;

	*n = *n | x;

	return (0);
}

