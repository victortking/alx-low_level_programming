#include "main.h"
#include <ctype.h>

/**
 * _isalpha - init function for isalpha
 * @c: character to check
 * Return: returns 1 if true and 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
