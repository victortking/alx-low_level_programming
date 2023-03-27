#include "main.h"

/**
 * print_last_digit - entry point
 * @n: parameter to check
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);

	if (n == INT_MIN)
		printf("%d8", last_digit);
}
