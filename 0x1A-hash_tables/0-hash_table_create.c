#include "hash_tables.h"

/**
* hash_table_create - Function to create the table.
* @size: Size of the array of hash table.
* Return: new_table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_table_t));
	if (new_table->array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
