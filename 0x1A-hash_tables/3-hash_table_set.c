#include "hash_tables.h"

/**
 * hash_table_set - Function to add an element to the hash table.
 * @ht: Element of the table.
 * @key: Key of the hash table.
 * @value: Value of the hash table.
 * Return: Element.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *new_element;

	if (key == NULL)
		return (-1);

	new_element = malloc(sizeof(hash_table_t));
	if (new_element == NULL)
		return (NULL);

	return (1);
}
