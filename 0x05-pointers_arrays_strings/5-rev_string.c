#include "holberton.h"

/**
* rev_string - entry point.
* @s: character "Holberton"
* Return: No return.
*/

void rev_string(char *s)
{
	int i, x;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		x = s[0];
		s[0] = s[8];
		s[8] = x;
		x = s[1];
		s[1] = s[7];
		s[7] = x;
		x = s[2];
		s[2] = s[6];
		s[6] = x;
		x = s[3];
		s[3] = s[5];
		s[5] = x;
		s[4] = s[4];
	}
}
