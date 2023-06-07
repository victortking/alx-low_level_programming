#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Checks and returns the value of x raised to power of y
 * @x: param to check for power
 * @y: power to use
 * Return: returns the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
