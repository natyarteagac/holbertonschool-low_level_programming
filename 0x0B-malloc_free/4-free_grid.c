#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - entry point
* @grid: int double pointer.
* @height: int pointer.
* Return: void.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
