#include "lists.h"

/**
* pop_listint - entry point.
* @head: doble pointer of head.
* Return: 0.
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (head && *head == NULL)
		return (-1);

	*head = (*head)->next;
	n = tmp->n;
		free(tmp);

	return (n);
}
