#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int first;
	unsigned long int i;
    if (ht == NULL)
        return;

    /*int first;   Flag to handle comma placement*/
    /*unsigned long int i;*/

    first = 1;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *current = ht->array[i];
        while (current != NULL)
        {
            if (!first)
                printf(", ");
            printf("'%s': '%s'", current->key, current->value);
            first = 0;  /* Reset the flag*/
            current = current->next;
        }
    }
    printf("}\n");
}
