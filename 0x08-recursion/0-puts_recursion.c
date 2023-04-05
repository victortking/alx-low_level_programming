#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Takes a string param and prints indi.
 * @s: string param
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);

		_puts_recursion(s + 1);
	}

	_putchar('\n');
}
