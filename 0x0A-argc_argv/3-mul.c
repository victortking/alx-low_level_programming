#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: rerurns error if unsuccessful otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < atoi(argv[1]); i++)
		mul += atoi(argv[2]);


	printf("%d\n", mul);
	return (0);

}
