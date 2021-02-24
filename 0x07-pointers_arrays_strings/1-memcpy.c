#include "holberton.h"

/**
* *_memcpy - entry point.
* @dest: char pointer.
* @src: char pointer.
* @n: usigned int.
* Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
