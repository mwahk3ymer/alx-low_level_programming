#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_created;
	hash_node_t **array;
	unsigned long int i;

	/* allocate space for the hash table */
	table_created = malloc(sizeof(hash_table_t));
	if (table_created == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table_created->array = array;
	table_created->size = size;

	return (table_created);
}
