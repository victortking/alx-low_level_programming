#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node_end - adds a node to the end of a singly linked list
 * @head: singly list head
 * @str: data
 * Return: returns type list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
		*head = new_node;
	else
		ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;

	return (new_node);
}
