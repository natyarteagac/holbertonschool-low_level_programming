#include "holberton.h"

/**
* swap_int - entry point.
* @a: pointer the integer we want to set to 42.
* @b: pointer the integer we want to set to 98.
*
* Return: nothing.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	
	*a = *b;

	*b = c; 
}
