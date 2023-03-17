#include <stdio.h>

/**
 * main - entry point
 * Return: returns 0
 */

int main(void)
{
	char numStr[30] = "0123456789abcdef";

	int i = 0;

	while (numStr[i] != '\0')
	{
		putchar(numStr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
