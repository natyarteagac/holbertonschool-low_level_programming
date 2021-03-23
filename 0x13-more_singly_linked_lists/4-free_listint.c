#include "lists.h"

/**
* free_listint - entry point
* @head: head of nodes.
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *i = head;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
