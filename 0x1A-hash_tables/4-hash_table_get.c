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
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		new_value = tmp->value;
		tmp = tmp->next;
	}
	return (new_value);
}
