#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;
	
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        ht->array[i] = NULL;
    }
    ht->shead = NULL;
    ht->stail = NULL;
    return (ht);
}

shash_node_t *shash_node_create(const char *key, const char *value)
{
    shash_node_t *new_node;

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (NULL);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
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
    new_node->sprev = NULL;
    new_node->snext = NULL;

    return (new_node);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *current, *prev, *new_node;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];
    prev = NULL;

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }
        prev = current;
        current = current->next;
    }

    new_node = shash_node_create(key, value);
    if (new_node == NULL)
        return (0);

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (prev == NULL || strcmp(prev->key, key) > 0)
    {
        new_node->snext = ht->shead;
        ht->shead = new_node;
    }
    else
    {
        new_node->sprev = prev;
        new_node->snext = prev->snext;
        prev->snext = new_node;
    }

    if (new_node->snext == NULL)
        ht->stail = new_node;
    else
        new_node->snext->sprev = new_node;

    return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *current;

    if (ht == NULL || key == NULL)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->shead;

    printf("{");
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current != NULL)
            printf(", ");
    }
    printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->stail;

    printf("{");
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current != NULL)
            printf(", ");
    }
    printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *current, *next;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            next = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = next;
        }
    }
    free(ht->array);
    free(ht);
}
