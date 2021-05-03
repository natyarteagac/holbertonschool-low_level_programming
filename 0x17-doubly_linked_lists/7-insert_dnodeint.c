#include "lists.h"

/**
* insert_dnodeint_at_index - Function to put a node into give index.
* @h: Double pointer to head.
* @idx: Give index.
* @n: Data of node,
* Return: new node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *tmp = *h;

	if (*h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

	new_node->n = n;

	if (idx == 0)
	{
		return (0);
	}
	while (i < idx && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (*h != NULL)
	{
		new_node->next = tmp;
		new_node->prev = tmp->prev;
		tmp->prev->next = new_node;
		tmp->prev = new_node;
	}
	tmp = tmp->next;

	return (new_node);
}
