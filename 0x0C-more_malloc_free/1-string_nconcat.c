#include "holberton.h"
#include <stdlib.h>

/**
* *string_nconcat - entry point.
* @s1: char pointer.
* @s2: char pointer.
* @n: unsigned int.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, z, p, r, b = 0;
	char *p_array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (z = 0; s2[z] != '\0'; z++)
	;
	if (n >= z)
		n = z;

	p_array = malloc((i + n) + 1 * sizeof(char));
	if (p_array == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		p_array[p] = s1[p];

	for (r = i; r < i + n; r++)
	{
		p_array[r] = s2[b];
		b++;
	}
	p_array[r] = '\0';

	return (p_array);
}
