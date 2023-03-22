#include "main.h"
#include <limits.h>

/**
 * _abs - entry point
 * @n: parameter is check
 * Return: returns abs num
 */
int _abs(int n)
{
	if (n > 0)
		return (n);


	else
	{
		n *= -1;
		return (n);
	}
}
