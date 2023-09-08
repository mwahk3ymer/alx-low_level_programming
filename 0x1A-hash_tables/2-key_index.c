#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Get the index at which the k table.
 * @key: The key string.
 * @size: The size of the hash table array.
 *
 * Return: The index for storing the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
