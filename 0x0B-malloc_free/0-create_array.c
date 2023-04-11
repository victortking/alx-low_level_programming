#include "main.h"

/**
 * create_array - allocates memory
 * @size: size of array
 * @c: value of array
 * Return: returns char value
 */
char *create_array(unsigned int size, char c)
{
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(char) * size);

	if (m == NULL)
		return NULL;
	else
		m[0] = c + '0';

	return (m);
}
