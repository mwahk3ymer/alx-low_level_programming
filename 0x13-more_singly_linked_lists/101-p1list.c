#include "lists.h"
#include <stddef.h>
/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t nodes = 0;
    listint_t *current, *tmp;

    if (h == NULL || *h == NULL)
        return (nodes);

    nodes = looped_listint_len(*h);
    if (nodes == 0)
    {
        while (*h != NULL)
        {
            tmp = (*h)->next;
            free(*h);
            *h = tmp;
            nodes++;
        }
    }
    else
    {
        current = *h;
        while (nodes--)
        {
            tmp = current->next;
            free(current);
            current = tmp;
        }
        (*h) = NULL;
    }
    return (nodes);
}

