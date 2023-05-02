#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *slow, *fast;

    if (head == NULL)
        exit(98);

    slow = head;
    fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            count++;
            slow = head;

            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                slow = slow->next;
                fast = fast->next;
                count++;
            }

            printf("[%p] %d\n", (void *)slow, slow->n);
            slow = slow->next;
            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                slow = slow->next;
                count++;
            }

            printf("[%p] %d\n", (void *)slow, slow->n);
            break;
        }
        count++;
    }
    return (count);
}
