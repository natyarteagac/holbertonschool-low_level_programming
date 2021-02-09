#include "holberton.h"

/**
* int _islower - function to return upper, lower and number
*
* int c function to return lowercase alphabet
*
* Return: O and 1.
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
