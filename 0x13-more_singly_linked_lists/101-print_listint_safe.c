#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	size_t count = 0;

	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		tmp = head;
		head = head->next;

		if (tmp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
				exit(98);
		}
	}
	return (count);
}
