#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @head: pointer to e head of the listint_t list.
 *
 * Return: size of the list freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t size = 0;
	listint_t *current, *tmp;

	if (!head || !*head)
		return (size);
	current = *head;
	while (current)
	{
		size++;
		if (current < current->next)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}
		else
		{
			free(current);
			break;
		}
	}

	*head = NULL;
	return (size);
}
