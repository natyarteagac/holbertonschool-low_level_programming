#include "holberton.h"
#include <stdlib.h>

/**
* *array_range - entry point.
* @min: int pointer.
* @max: int pointer.
* Return: New array.
*/

int *array_range(int min, int max)
{
	int i, len;
	int *nArray;

	if (min > max)
		return (NULL);

	nArray = malloc((max - min + 1) * sizeof(int));

	if (nArray == NULL)
	{
		return (NULL);
	}

	len = (max - min);

	for (i = 0; i <= len; i++)
	{
		nArray[i] = min;
		min++;
	}
	return (nArray);
}
