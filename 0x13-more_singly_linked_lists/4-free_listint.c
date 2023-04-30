#include "lists.h"

/**
 * free_listint -frees a list
 * @head: pointer tot head of listint_t
 *
 * Return: always void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
