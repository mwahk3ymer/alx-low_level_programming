#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
    {
        print_number(num / 10);
    }

    putchar((num % 10) + '0');
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t nodes, idx = 0;

    if (head == NULL)
        exit(98);

    slow = fast = head;
    count = 0;

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;
            break;
        }
    }

    return (count);
}
