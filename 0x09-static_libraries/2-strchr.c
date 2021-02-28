#!/bin/bash
#include "holberton.h"

/**
* _puts - entry point.
* @s: char pointer.
* Return: void.
*/

void _puts(char *s)
{
	int i = 0, k;

	while (*(s + i))
		i++;

	k = i / 2;

	if (k % 2 == 0)
	{
		k = k + 1;
	}

	while (k < i)
	{
		_putchar(*(s + k));
		k++;
	}
	_putchar('\n');
}
