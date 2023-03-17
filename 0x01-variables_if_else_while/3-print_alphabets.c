#include <stdio.h>

/**
 * main - initializing main function
 * Return: returns 0
 */
int main(void)
{
	char myS[30] = "abcdefghijklmnopqrstuvwxyz";

	char mySj[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i, j;

	i = 0;

	j = 0;

	while (myS[i] != '\0')
	{
		putchar(myS[i]);
		i++;
	}

	while (mySj[j] != '\0')
	{
		putchar(mySj[j]);
		j++;
	}

	putchar('\n');

	return (0);
}
