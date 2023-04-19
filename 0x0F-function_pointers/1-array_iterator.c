#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - prints array element
 * @array: element to print
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
