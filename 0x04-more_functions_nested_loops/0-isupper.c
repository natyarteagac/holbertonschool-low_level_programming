#include "holberton.h"

/**
* _isupper - entry point.
* @c: show the variable to return.
* Return: 0 and 1.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
