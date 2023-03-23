#include "main.h"

/**
 * print_last_digit - entry point
 * @a: parameter to check
 * Return: returns last digit
 */
int print_last_digit(int a)
{
       	if (a >= 0 && a <= 9)
        return (a);

        else
        {
	       	a = a % 10;
	a *= 11;
	        return (a);
        }
}
