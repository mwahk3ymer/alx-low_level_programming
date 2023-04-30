#include "lists.h"

/**
 * free_listint2 - frees list and sets header to null
 * @head: pointer to a pointer tot tje head of the list
 *
 * Return: always void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
