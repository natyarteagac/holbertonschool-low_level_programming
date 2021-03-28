#include "lists.h"

/**
* get_nodeint_at_index - entry point.
* @head: direction of node.
* @index: index of node to return.
* Return: node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;

	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (index != i)
	{
		p = p->next;
		i++;
	}
	return (p);
}
