#include "holberton.h"

/**
* _abs - entry point.
*
* @r: represent the variable.
*
* Return: Always r.
*/

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}

	else
	{
		return (r);
	}
}
