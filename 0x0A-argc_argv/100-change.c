#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: returns int value
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]), i, total_coins = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		total_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", total_coins);
	return (0);
}
