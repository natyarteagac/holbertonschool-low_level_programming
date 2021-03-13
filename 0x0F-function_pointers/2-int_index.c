#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - entry point.
* @array: string of numbers.
* @size: leng of string.
* @cmp: Pointer string.
* Return: i when i matches -1 when i doesn´t match.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
			i++;
	}
	return (-1);
}
