#include "main.h"
#include <math.h>


int _sqrt_recursion(int n)
{
	int s = sqrt(n);

	if (n != s * s)
		return (-1);
	else
		return (s);
}
