#include "main.h"
#include <stdio.h>

/**
 * puts2 - entry point
 * @str: param to deal with
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
