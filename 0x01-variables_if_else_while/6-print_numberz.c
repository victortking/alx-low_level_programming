#include <stdio.h>

/**
 * main - main entry point
 * Return: always returns 0
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');
	return (0);
}
