#include "lists.h"

/**
 * listint_len -returns the nums of elements
 * @h: pointer to the head of linked list
 *
 * Return: the nms of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
