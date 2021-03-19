#include "lists.h"

/**
*
*
*
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
	printf("%s", h->str);
	i++;
	}

	return (i);
}
