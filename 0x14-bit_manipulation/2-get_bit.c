#include "holberton.h"

/**
* get_bit - entry point.
* @n: numbers to comparate.
* @index: number to return.
* Return: index.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	if ((n & (1 << index)))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (index);
}
