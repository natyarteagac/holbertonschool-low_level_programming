#include "lists.h"

/**
* free_dlistint - function to free the linked list.
* @head: pointer to head.
* Return: void.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;

	}
}
