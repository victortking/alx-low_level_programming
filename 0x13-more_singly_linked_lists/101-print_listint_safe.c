#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list, handling loops
 *
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (!head)
		exit(98);

	tortoise = hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			printf("-> [%p] %d\n", (void *)tortoise->next, tortoise->next->n);
			return (count + 2);
		}
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	count++;

	return (count);
}
