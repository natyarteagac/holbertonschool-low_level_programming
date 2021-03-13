#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - entry point.
* @array: array to print.
* @size: leng of array
* @action: Pointer to the funct.
* Return: void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;

	else
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
