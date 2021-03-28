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

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i != index && p != NULL)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
		return (NULL);

	return (p);
}
