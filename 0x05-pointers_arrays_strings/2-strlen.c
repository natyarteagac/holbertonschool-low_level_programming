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

	for (i = 0; *(s + i) != '\0'; i++);

	return (i);
}

