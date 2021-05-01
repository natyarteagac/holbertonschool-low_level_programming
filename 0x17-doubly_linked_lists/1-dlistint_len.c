#include "lists.h"

/**
* dlistint_len - entry point.
* @h: head of pointer.
* Return: Number of elements of the linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
