#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at statrt of list
 * @head: pointer to the pointer to the head of the list
 * @str: str to be added to new node
 *
 * Return: the addres of new element, or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
