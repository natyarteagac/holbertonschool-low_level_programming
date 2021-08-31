#include <stdio.h>
#include "search_algos.h"
/**
 * print_array - Function to print the array.
 * @array: Pointer to array.
 * @left_middle: Left part of array
 * @right_middle: Right part of array
 * Return: void.
 */

void print_array(int *array, int left_middle, int right_middle)
{
	if (left_middle <= right_middle)
	{
		printf("Searching in array: ");
		for (left_middle; left_middle <= right_middle; left_middle++)
		{
			printf("%d", array[left_middle]);
			if (left_middle == right_middle)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}

/**
 * binary_search - Function to find the match with
 * value using binary search algorith
 * @array: Pointer to array.
 * @size: Size of array.
 * @value: value to search for.
 * Return: index or -1 if function fails.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left_middle = 0;
	size_t right_middle = size - 1;
	int index = -1;
	int middle = -1;

	if (value == 0 | array == NULL)
		return (-1);

	print_array(array, left_middle, right_middle);
	while (left_middle <= right_middle)
	{
		size_t middle = left_middle + (right_middle - left_middle) / 2;

		if (array[middle] == value)
		{
			index = middle;
			return (index);
		}
		if (array[middle] < value)
		{
			left_middle = middle + 1;
		}
		else
			right_middle = middle - 1;
		print_array(array, left_middle, right_middle);
	}
	return (-1);
}
