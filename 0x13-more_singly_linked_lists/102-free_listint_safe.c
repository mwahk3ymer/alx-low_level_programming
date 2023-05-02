#include "lists.h"

/**
 * free_listint_safe - frees list safely
 * @h: pointer to pointer to head
 *
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	return (count);
}
