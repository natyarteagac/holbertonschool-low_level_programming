#include "lists.h"

/**
* print_list - entry point.
* @h: pointer to nodes.
* Return: lenght.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
			h = h->next;
			i++;
		}

		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
