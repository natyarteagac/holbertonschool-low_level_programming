#include "lists.h"

/**
* *add_dnodeint_end - entry point.
* @head: Double pointer to head.
* @n: data.
* Return: last_node.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *tmp;

	last_node = malloc(sizeof(dlistint_t));
		if (last_node == NULL)
			return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
			return (last_node);
	}

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	last_node->prev = tmp;
	tmp->next = last_node;

	return (last_node);
}
