#include "main.h"

/**
 * print_numbers - entry point
 * Return: returns 0
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while(i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
