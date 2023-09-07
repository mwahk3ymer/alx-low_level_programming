#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list of hash nodes.
 * @head: Pointer to the head of the linked list.
 */
void free_list(hash_node_t *head)
{
    if (head == NULL)
        return;

    hash_node_t *current = head;
    while (current != NULL)
    {
        hash_node_t *next = current->next;
        free(current->key);
        free(current->value);
        free(current);
        current = next;
    }
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
    if (ht == NULL)
        return;

    for (unsigned long int i = 0; i < ht->size; i++)
    {
        free_list(ht->array[i]);
    }

    free(ht->array);
    free(ht);
}
