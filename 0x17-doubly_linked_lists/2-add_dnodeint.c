#include "lists.h"

/**
* *add_dnodeint - entry point.
* @head: double pointer of head.
* @n: information of the pointers.
* Return: new node created at first of the list.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;

	if (*head != NULL)
	{
		tmp->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
