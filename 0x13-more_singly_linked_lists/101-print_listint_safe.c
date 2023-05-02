#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints linked list
 * @head: pointer to start of list
 *
 * Return: nums of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	if (!head)
		exit(98);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("Loop detected\n");
			exit(98);
		}

		printf("%d\n", slow->n);
		count++;
	}

	if (slow && fast)
	{
		printf("%d\n", slow->n);
		count++;
	}

	return (count);
}
