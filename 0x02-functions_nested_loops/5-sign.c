#include "main.h"

/**
 * print_sign - init function for print_sign
 * @n: character to check
 * Return: returns 1&0 if successful otherwise returns -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
