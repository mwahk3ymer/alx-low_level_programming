#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prinsts a linked list
 * @head: pointer to the head
 *
 * Return: nums of nodes nums
 */
size_t print_listint_safe(const listint_t *head)
{
        const listint_t *slow, *fast, *loop_start;
        size_t count = 0;

        if (head == NULL)
                exit(98);

        slow = fast = head;

        while (fast != NULL && fast->next != NULL)
        {
                printf("[%p] %d\n", (void *)slow, slow->n);
                count++;

                slow = slow->next;
                fast = fast->next->next;

                if (slow == fast)
                {
                        loop_start = slow;
                        break;
                }
        }

        if (slow != fast)
        {
                while (head != NULL)
                {
                        printf("[%p] %d\n", (void *)head, head->n);
                        count++;
                        head = head->next;
                }

                return (count);
        }

        slow = head;

        while (slow != fast)
        {
                printf("[%p] %d\n", (void *)slow, slow->n);
                count++;
                slow = slow->next;
                fast = fast->next;
        }

        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

        slow = slow->next;

        while (slow != loop_start)
        {
                printf("[%p] %d\n", (void *)slow, slow->n);
                count++;
                slow = slow->next;
        }

        printf("-> [%p] %d\n", (void *)slow, slow->n);
        count++;

        return (count);
}
