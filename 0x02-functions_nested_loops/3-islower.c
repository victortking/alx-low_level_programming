#include "main.h"
#include <ctype.h>

/**
 * _islower - difines islower
 * Return: returns 1
 * Return: returns 0
*/
int _islower(int c)
{
        if (islower(c))
        {
                return (1);
        }
	else 
	{
		return (0);
	}
}
