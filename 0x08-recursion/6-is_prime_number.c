#include "main.h"

/**
 * is_prime_number - checks if a given integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	/* Base cases */
	if (n <= 1)
		return 0;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;

	return is_prime_helper(n, 3);
}

/**
 * is_prime_helper - a helper function to recursively check if a given
 *                   integer is a prime number.
 * @n: the integer to check
 * @i: the divisor to check against
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return 1;
	if (n % i == 0)
		return 0;

	return is_prime_helper(n, i + 2);
}

