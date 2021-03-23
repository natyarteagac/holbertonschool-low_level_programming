#include "lists.h"

/**
* free_list - entry point.
* @head: head of nodes.
* Return: void.
*/

void free_list(list_t *head)
{
	list_t *i = head;

	while (i)
	{
		i = i->next;
		free(i);
	}
}
