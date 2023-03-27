#include "main.h"

/**
 * swap_int - takes param to swap values
 * @a: param to swap
 * @b: param to swap
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;

	d = *b;

	*a = d;

	*b = c;
}
