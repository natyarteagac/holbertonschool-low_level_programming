#include "holberton.h"

/**
* *string_toupper - entry point.
* @p: char pointer.
* Return: p.
*/

char *string_toupper(char *p)
{
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')
		*(p + i) = *(p + i) - 32;
	}
	return (p);
}
