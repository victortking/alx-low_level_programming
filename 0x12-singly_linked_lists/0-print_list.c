
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a node
 * @h: head of nod3
 * Return: returns count of the node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;

		h = h->next;
	}

	return (count);
}
