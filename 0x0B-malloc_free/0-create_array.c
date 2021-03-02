#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - entry point.
 * @size: int size.
 * @c: char c.
 * Return: result.
*/

char *create_array(unsigned int size, char c)
{
	char *p_array;
	unsigned int i;

	if (size == 0)
		return (0);

	p_array = malloc(size * sizeof(char));

	if (p_array == NULL)
	{
		return (0);
	}
	else
		for (i = 0; i < size; i++)
		{
			p_array[i] = c;
		}
	return (p_array);
}
