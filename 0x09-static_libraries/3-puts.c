#!/bin/bash
#include "holberton.h"

/**
* _puts - entry point.
* @str: Pointer char.
* Return: nothing.
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
	_putchar(*(str + i));
	i++;
	}
	_putchar('\n');
}
