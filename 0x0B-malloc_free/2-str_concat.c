#include "holberton.h"
#include <stdlib.h>

/**
* *str_concat - entry point.
* @s1: char pointer.
* @s2: char pointer.
* Return: Result of the concanetenation.
*/

char *str_concat(char *s1, char *s2)
{
	int i, k, j, m, p = 0;
	char *ns;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;
	ns = malloc((i + k) * sizeof(char) + 1);

	if (ns == NULL)
		ns = (NULL);

	for (j = 0; j < i; j++)

		ns[j] = s1[j];

	for (m = i; m < k + i; m++)
	{
		ns[m] = s2[p];
		p++;
	}
	ns[m] = '\0';

	return (ns);
}
