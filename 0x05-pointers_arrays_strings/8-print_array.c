#include "holberton.h"

/**
* print_array - entry point.
* @a: pointer number.
* @n: pointer number.
* Return: Never.
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", *(a + i));
		i++;
	}
}
