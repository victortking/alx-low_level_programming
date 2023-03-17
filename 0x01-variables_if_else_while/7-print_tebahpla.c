#include <stdio.h>

/**
 * main - entry point
 * Return: returns 0
 */

int main(void)
{
	char alpha[30] = "zyxwvutsrqponmlkjihgfedcba";

	int i = 0;

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);

		i++;
	}
	putchar('\n');
	return (0);
}
