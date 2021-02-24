#include "holberton.h"

/**
* _strcmp - entry point.
* @s1: pointer char.
* @s2: pointer char.
* Return: 0.
*/

int _strcmp(char *s1, char *s2)
{

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	return (0);
}
