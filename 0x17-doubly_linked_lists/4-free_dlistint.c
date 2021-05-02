#include "lists.h"

/**
* free_dlistint - function to free the linked list.
* @head: pointer to head.
* Return: void.
*/

void free_dlistint(dlistint_t *head)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i++;
	}
	free(head);
}
