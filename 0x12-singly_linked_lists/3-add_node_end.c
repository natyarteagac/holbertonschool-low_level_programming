#include "lists.h"

/**
* add_node_end - entry point.
* @head: head of the node.
* @str: direction of node.
* Return: new_node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;
	unsigned int leng = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (new_node->str[leng])
	{
		leng++;
	}
	new_node->len = leng;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	return (new_node);
}
