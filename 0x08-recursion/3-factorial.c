#include "main.h"

/**
 * factorial - checks and returns the factor of any num
 * @n: param to check for the factorial
 * Return: returns int values
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		n = 1;

		return (n);
	}
	else if (n < 0)
	{
		n = -1;

		return (n);
	}

	return (n * factorial(n - 1));
}
