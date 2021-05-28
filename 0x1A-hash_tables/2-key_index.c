#include "hash_tables.h"
/**
 * key_index - Function to take the index of the key.
 * @key: key to work.
 * @size: Size of the array.
 * Return: Value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
