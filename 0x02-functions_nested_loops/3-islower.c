#include "holberton.h"

/**
* _islower - check the lowercase alphabet.
*
* c - return all the lowercase alphabet.
*
* Return: 0 and 1.
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
