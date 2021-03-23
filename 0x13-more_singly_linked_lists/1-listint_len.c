#include "lists.h"

/**
* listint_len - entry point.
* @h: pointer to nodes.
* Return: number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
