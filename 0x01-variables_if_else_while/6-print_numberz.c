#include <stdio.h>

/**
 * main - main entry point
 * Return: always returns 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
