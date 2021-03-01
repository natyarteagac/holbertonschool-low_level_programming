#include "holberton.h"

/**
* *_strcat - entry point.
* @dest: char pointer.
* @src: char pointer.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int n = 1;
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
