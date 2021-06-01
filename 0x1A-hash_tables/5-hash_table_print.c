#include "hash_tables.h"

/**
 * hash_table_print - Function to print the hash table.
 * @ht: Hash table.
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
		return;
	printf("%s\n", ht->array);
}
