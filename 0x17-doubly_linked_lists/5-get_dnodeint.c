#include "lists.h"

/**
* get_dnodeint_at_index - Function to get the node in index.
* @head: Pointer to head.
* @index: Index to return.
* Return: Node in position index.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth = head;
	unsigned int i = 0;

	while (i < index && nth != NULL)
	{
		nth = nth->next;
		i++;
	}

	if (nth == NULL)
		return (NULL);

	return (nth);
}
