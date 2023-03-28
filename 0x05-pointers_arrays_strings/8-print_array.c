#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array integers
 * @a: array pointer
 * @n: array size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);



		if (i != n - 1)
			printf(", ");
	}


	printf("\n");
}
