#include <stdio.h>

/**
 * main - initializing main function
 * Return: returns 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}

	putchar('\n');
	return (0);
}
