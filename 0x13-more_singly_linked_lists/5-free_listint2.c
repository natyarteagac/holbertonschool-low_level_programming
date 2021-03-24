#include "lists.h"

/**
* free_listint2 - entry point.
* @head: head of nodes.
* Return: void.
*/


void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
}
