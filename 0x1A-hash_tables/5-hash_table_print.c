#include "hash_tables.h"

/**
 * hash_table_print - Function to print the hash table.
 * @ht: Hash table.
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int iterator = 0;
	char *c = "";
	char *d = ", ";

	if (ht == NULL)
		return;

	if (ht != NULL)
	{
		printf("{");
		while (iterator < ht->size)
		{
			tmp = ht->array[iterator];
			while (tmp != NULL)
			{
				printf("%s", c);
				printf("%s : %s", tmp->key, tmp->value);
				c = d;
				tmp = tmp->next;
			}
			iterator++;
		}
	}
	printf("}\n");
}
