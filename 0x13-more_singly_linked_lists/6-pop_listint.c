#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first node and returns the head data
 * @head: node head;
 * Return: returns the head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return ((*head)->n);
}
