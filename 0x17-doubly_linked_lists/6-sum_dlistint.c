#include "lists.h"

/**
* sum_dlistint - Function to Add the data of the nodes.
* @head: Pointer to head.
* Return: Add of the data. 
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int add = 0;

	while (tmp != NULL)
	{
		add += tmp->n;
		tmp = tmp->next;
	}
	if (add == 0)
		return (0);

	return (add);
}

