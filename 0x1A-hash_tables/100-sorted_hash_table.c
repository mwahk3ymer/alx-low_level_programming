#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *shash_table = malloc(sizeof(shash_table_t));
    if (!shash_table)
        return (NULL);

    shash_table->size = size;
    shash_table->array = calloc(size, sizeof(shash_node_t *));
    if (!shash_table->array)
    {
        free(shash_table);
        return (NULL);
    }

    shash_table->shead = NULL;
    shash_table->stail = NULL;
    return (shash_table);
}

/**
 * create_node - Creates a new sorted hash node
 * @key: The key to insert
 * @value: The associated value
 *
 * Return: A pointer to the new node, or NULL on failure
 */
static shash_node_t *create_node(const char *key, const char *value)
{
    shash_node_t *new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return (NULL);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;
    new_node->sprev = NULL;
    new_node->snext = NULL;
    return (new_node);
}

/**
 * shash_table_set - Adds or updates an element in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to add/update
 * @value: The associated value
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    if (!ht || !key || *key == '\0')
        return (0);

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (1);
        }
        current = current->next;
    }

    shash_node_t *new_node = create_node(key, value);
    if (!new_node)
        return (0);

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    insert_sorted_node(ht, new_node);
    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The sorted hash table
 * @key: The key to look up
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    if (!ht || !key || *key == '\0')
        return (NULL);

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }
    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    if (!ht)
        return;

    shash_node_t *current = ht->shead;
    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    if (!ht)
        return;

    shash_node_t *current = ht->stail;
    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    if (!ht)
        return;

    for (unsigned long int i = 0; i < ht->size; i++)
    {
	    shash_node_t *current = ht->array[i];
	    while (current)
	    {
		    shash_node_t *next = current->next;
		    free(current->key);
		    free(current->value);
		    free(current);
		    current = next;
	    }
    }

    free(ht->array);
    free(ht);
}
