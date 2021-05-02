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
		{
			return (NULL);
		}
	new_node->prev = *h;
	new_node->n = n;

	while (i < idx && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	new_node->prev = tmp;
	tmp->next = new_node;
	tmp = tmp->next;

	return (new_node);
}
