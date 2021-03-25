#include "holberton.h"

/**
* binary_to_uint - entry point.
* @b: string of char.
* Return: result.
*/

unsigned int binary_to_uint(const char *b)
{
	int iterator_one = 0, iterator_two = 0;
	unsigned int result = 0, bit, h;

	if (b == NULL)
		return (0);

	while (b[iterator_one] != '\0')
	{
		if (b[iterator_one] != '0' && b[iterator_one] != '1')
		{
			return (0);
		}
		iterator_one++;
	}
	h = iterator_one - 1;
	while (b[iterator_two] != '\0')
	{
		if (b[iterator_two] == '1')
			bit = 1;
		if (b[iterator_two] == '0')
			bit = 0;
		result += bit << h;
		iterator_two++;
		h--;
	}
	return (result);
}
