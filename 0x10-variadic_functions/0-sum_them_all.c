#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function.
* @n: entry of the numbers.
* Return: sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arr;

	if (n == 0)
		return (0);

	va_start(arr, n);

	for (i = 0; i < n; i++)
	sum += va_arg(arr, int);

	va_end(arr);
	return (sum);
}
