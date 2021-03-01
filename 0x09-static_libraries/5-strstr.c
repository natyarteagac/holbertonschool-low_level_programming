#include "holberton.h"

/**
* *_strstr - entry point.
* @haystack: char pointer.
* @needle: char pointer.
* Return: 0.
*/

char *_strstr(char *haystack, char *needle)
{

	while ((*haystack != '\0' && *needle != '\0') && *haystack == *needle)
	{
	haystack++;
	needle++;
	}
	if (*haystack != *needle)
	{
		return (0);
	}
	return (0);
}
