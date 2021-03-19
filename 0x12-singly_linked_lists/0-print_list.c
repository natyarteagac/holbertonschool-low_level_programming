#include "lists.h"

/**
* print_list - entry point.
* @h: pointer to nodes.
* Return: lenght.
*/

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
	{
		printf("(nil)");
		return 0;
	}
	while (h != NULL)
	{
		printf("%s", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
