#include "lists.h"

/**
 * pop_listint - deletes the hea node
 * @head: pointer to the head node of the list
 *
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
