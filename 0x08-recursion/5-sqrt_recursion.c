#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	/* Recursive case */
	return _sqrt_helper(n, n);
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: input number
 * @i: candidate square root
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_helper(int n, int i)
{
	/* Base case */
	if (i <= 0)
		return (-1);

	if (i * i == n)
		return (i);

	/* Recursive case */
	return _sqrt_helper(n, i - 1);
}


