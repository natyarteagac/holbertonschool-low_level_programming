#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* print_strings - Pointer function.
* @separator: string ", "
* @n: numbers on the string.
* Return: void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list arr;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(arr, char*);
		if (p == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", p);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arr);
}
