#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;


	if (!head)
		exit(98);

	while (head != NULL)
	{
		current = head;
		head = head->next;
		printf("[%p] %d\n", (void *) current, current->n);
		count++;

		if (current <= head)
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
	}

	return (count);
}
