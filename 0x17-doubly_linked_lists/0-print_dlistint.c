#include "lists.h"

/**
* print_dlistint - entry point.
* @h: header node.
* Return: Number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
