#include "holberton.h"
#include <stdlib.h>

/**
* **alloc_grid - entry point.
* @width: int pointer.
* @height: int pointer.
* Return: Result of height and width.
*/

int **alloc_grid(int width, int height)
{
	int i, z;
	int **nA;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	nA = malloc(height * sizeof(int*));

	if (nA == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		nA[i] = malloc(width * sizeof(int));
			for (z = 0; z < width; z++)
				nA[i][z] = 0;
	}
	return (nA);
}
