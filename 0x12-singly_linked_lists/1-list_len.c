#include "lists.h"

/**
* list_len - entry point.
* @h: pointer to node.
* Return: Number of elements.
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
