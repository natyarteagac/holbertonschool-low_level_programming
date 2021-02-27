#include "holberton.h"

/**
* _pow_recusion - entry point.
* @x: int pointer.
* @y: int pointer.
* Return: int negative or positive.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
