#include "main.h"

/**
 * _puts_recursion - prints a string,followed by a new line
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
	{
		_putchar('\n'); /* print newline */
		return; /* exit function */
	}
	_putchar(*s); /* print current character */
	_puts_recursion(s + 1); /* call function recursively with next character */
}

