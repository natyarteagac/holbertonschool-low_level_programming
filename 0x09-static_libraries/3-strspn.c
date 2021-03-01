#!/bin/bash
#include "holberton.h"

/**
* _strcmp - entry point.
* @s: char pointer.
* @c: char pointer.
* Return: 0.
*/

char *_strchr(char *s, char c)
{

	while ((*s != '\0' && c != '\0') && *s == c)
	{
	s++;
	c++;
	}
	if (*s != c)
	{
		return (0);
	}
	return (0);
}
