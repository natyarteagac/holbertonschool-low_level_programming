#include "holberton.h"

/**
* print_alphabet - print the alphabet in lowercase
*
* Return: Always 0.
*/

void print_alphabet(void)
{

	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}

	_putchar('\n');

}

