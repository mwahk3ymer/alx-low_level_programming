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
	const listint_t *slow, *fast;
	size_t count;

	if (head == NULL)
		exit(98);

	slow = fast = head;
	count = 0;

	while (fast != NULL && fast->next != NULL)
	{
		printf("{%p} %d\n", (void *)slow, slow->n);
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
