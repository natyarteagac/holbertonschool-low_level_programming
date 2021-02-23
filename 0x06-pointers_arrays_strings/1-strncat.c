#include "holberton.h"

/**
* *_strncat - entry point.
* @dest: char pointer.
* @src: char pointer.
* @n: variable.
* Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, a;

	while (*(dest + i))
	{
		i++;
	}

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + i) = *(src + a);
		i++;
	}

	return (dest);
}
