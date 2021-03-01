#include <stdio.h>

/**
* _strlen - start point.
*
* @s: Pointer char.
*
* Return: i.
*/

int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
