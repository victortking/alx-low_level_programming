#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Checks and returns the value of power
 * @x: param to check for power
 * @y: power to use
 * Return: returns the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		x = -1;

		return x;
	}

	return (pow(x, y));
}
