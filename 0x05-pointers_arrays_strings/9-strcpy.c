#include "holberton.h"

/**
* *_strcpy - entry point.
* @dest: empty string.
* @src: source string.
* Return: dest.
*/

char *_strcpy(char *dest, char *src)
{
	int leng = 0, a;

	while (*(src + leng))
	{
		leng++;
	}

	for (a = 0; a <= leng; a++)
	{
		*(dest + a) = *(src + a);
	}

	return (dest);
}
