#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - entry point.
* @b: unsigned int.
* Return: void.
*/

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
