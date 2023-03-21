#include "main.h"

/**
 * main - entry point
 * Return: returns 0
 */

int main(void)
{
	char c[30] = "_putchar";

	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
