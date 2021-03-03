#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup - entry point.
* @str: char pointer.
* Return: new pointer.
*/

char *_strdup(char *str)
{
	int i, k;
	char *ns;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	ns = malloc(i * sizeof(char));

	if (ns == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
		ns[k] = str[k];

	return (ns);
}
