#include <stdio.h>

/**
 * main - initializing main function
 * Return: returns 0
 */
int main(void)
{
	char myStr[30] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	while (myStr[i] != '\0')
	{
		putchar(myStr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
