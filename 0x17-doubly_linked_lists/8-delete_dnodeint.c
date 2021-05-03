#include "lists.h"

/**
* delete_dnodeint_at_index - Function to delete the node.
* @head: Double pointer to head..
* @index: Index to delete node.
* Return: 1 successfull (-1) failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index && tmp->next == NULL)
	{
		tmp = tmp->next;
		i++;
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}

	while (i < index && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
		tmp->prev->next = tmp->next;
		tmp->next = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
