#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tmp = head, *prev = NULL;

	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;

		if (tmp < prev)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}

		prev = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (count);

	exit(98);
}
