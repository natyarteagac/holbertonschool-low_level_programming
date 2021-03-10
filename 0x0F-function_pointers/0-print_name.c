#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - entry name of the person f.
* @name: name of subject.
* @f: pointer to function.
* return: void.
*/

void print_name(char *name, void (*f)(char *))
{
	if ((f) == NULL)
		return;

	(*f)(name);
}
