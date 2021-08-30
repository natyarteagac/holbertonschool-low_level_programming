#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Function to search the value using linear search algorithm
 * @array: Pointer to array.
 * @size: Size of array
 * @value: Value to search for in array
 * Return: First index where value is located or -1 if function fails.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (value == 0 || array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
