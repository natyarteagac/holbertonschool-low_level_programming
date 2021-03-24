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

	if (*head != NULL)
	{
		*head = tmp->next;
		n = tmp->n;
			free(tmp);
		return (n);
	}
	else
	return (0);
}
