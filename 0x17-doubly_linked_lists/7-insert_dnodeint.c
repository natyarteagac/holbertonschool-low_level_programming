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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = tmp;
		*h = new_node;
		new_node->prev = NULL;
		if (tmp)
			tmp->prev = new_node;
		return (new_node);
	}
	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
		if (tmp->next == NULL)
			return (NULL);
	}
	if (*h != NULL)
	{
		if (tmp->next == NULL)
		{
			new_node->next = NULL;
		}
		else
		{
			new_node->next = tmp->next;
			tmp->next->prev = new_node;
		}
	new_node->prev = tmp;
	tmp->next = new_node;
	}

	return (new_node);
}
