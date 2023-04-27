#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: A pointer to the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;

		t++;
	}

	return (t);
}
