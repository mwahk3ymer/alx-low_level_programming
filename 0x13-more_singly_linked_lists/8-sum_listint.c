#include "lists.h"

/**
 * sum_listint - return the sum of all data(n)
 * @head: pointer to head node of list
 *
 * Return: sum of all data of e list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);

}
