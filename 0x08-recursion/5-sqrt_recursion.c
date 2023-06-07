#include "main.h"

/**
 * find_sqrt - Recursive function to find the square root
 * @n: The number to find the square root of
 * @i: The current number being checked as a potential square root
 *
 * Return: The square root of n if found, -1 otherwise
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, -1 if natural sqr is null
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
