#include <stdio.h>
#include "dog.h"

/**
* print_dog - Function.
* @d: information of dog.
*/

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age < 0)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("(nil)\n");
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
