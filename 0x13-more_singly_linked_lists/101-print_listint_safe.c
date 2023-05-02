#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - Frees a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
    size_t nodes, i;
    listint_t *current, *temp;

    nodes = looped_listint_len(*head);
    if (nodes == 0)
    {
        for (i = 0; *head != NULL; i++)
        {
            temp = (*head)->next;
            free(*head);
            *head = temp;
        }
    }
    else
    {
        for (i = 0; i < nodes; i++)
        {
            current = *head;
            printf("[%p] %d\n", (void *)current, current->n);
            *head = (*head)->next;
            free(current);
        }
        printf("-> [%p] %d\n", (void *)*head, (*head)->n);
        free(*head);
        *head = NULL;
        i++;
    }
    return (i);
}
