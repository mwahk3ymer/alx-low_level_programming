#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elemint
 *
 * @h: a pointer
 *
 * Return: the nm of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
