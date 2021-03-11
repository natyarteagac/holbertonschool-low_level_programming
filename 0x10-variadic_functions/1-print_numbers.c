#include <stdio.h>
#include <stdarg.h>
# include "variadic_functions.h"

/**
* print_numbers - Pointer function.
* @separator: string ", "
* @n: numbers.
* Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arr;

	if (separator == NULL)
		return;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arr, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(arr);
}
