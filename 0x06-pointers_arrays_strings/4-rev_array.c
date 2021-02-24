#include "holberton.h"

/** 
* reverse_array - entry point.
* @a: int pointer.
* @n: int pointer.
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int x[1000];
	int i, j;

	for (j = 0; j < n; j++)
	{
		*(x + j) = *(a + j);
	}

	j = 0;

	for (i = (n - 1); i >= 0; i--)
	{
		*(a + i) = *(x + j);
		j++;
	}
}
