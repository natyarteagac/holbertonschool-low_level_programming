#include "holberton.h"

/**
* _isalpha - check the uppercase and lowercase alphabet.
*
* @c: print all the upper and lowercase alphabet.
*
* Return: 0 and 1.
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
