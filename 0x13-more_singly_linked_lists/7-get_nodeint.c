#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head node
 * @index: indx of node tbr
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *current;

	current = head;
	for (k = 0; k < index && current != NULL; k++)
	{
		current = current->next;
	}

	if (k == index && current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
