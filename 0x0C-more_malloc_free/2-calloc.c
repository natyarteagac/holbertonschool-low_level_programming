#include "holberton.h"
#include <stdlib.h>

/**
* *_calloc - entry point.
* @nmemb: unsigned int.
* @size: unsigned int.
* Return: char.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *nArray;

	if (nmemb == 0 && size == 0)
		return (NULL);

	nArray = malloc(nmemb * sizeof(char));

	if (nArray == NULL)
		return (0);

	for (i = 0; i < nmemb * size; i++)
	{
		nArray[i] = 0;
	}
	return (nArray);
}
