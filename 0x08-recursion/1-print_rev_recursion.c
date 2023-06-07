#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: param to print in reverse
 * Return: returns
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
