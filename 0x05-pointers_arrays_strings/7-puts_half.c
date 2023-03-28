#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
		length++;

	for (i = (length + 1) / 2; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}

