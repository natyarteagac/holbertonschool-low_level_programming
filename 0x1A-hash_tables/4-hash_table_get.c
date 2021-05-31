#include "hash_tables.h"

/**
 *hash_table_get - Function to return the value.
 *@ht: hash table to work.
 *@key: key to find
 *Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_node_t *tmp;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (tmp->value);
}
