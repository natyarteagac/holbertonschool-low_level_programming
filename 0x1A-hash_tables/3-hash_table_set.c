#include "hash_tables.h"

/**
 * new_node - entry point.
 * @key: Key of the node.
 * @value: Value of the node.
 * Return: new node.
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (key == NULL || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node->key);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - Function to add an element to the hash table.
 * @ht: Element of the table.
 * @key: Key of the hash table.
 * @value: Value of the hash table.
 * Return: Element.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element;
	hash_node_t *tmp;
	char *new_value;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
				free(tmp);
				tmp->value = new_value;
				return (1);
			}
		}
		tmp = tmp->next;
	}
	new_element = new_node(key, value);
	if (new_element == NULL)
		return (0);

	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
