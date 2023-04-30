#include "lists.h"

/**
 * add_nodeint - adds new node at the start
 * @head: pointer to a pointer at head of list
 * @n: the int to store in new node
 *
 * Return: succes - pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
