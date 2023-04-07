#include <stdio.h>
#include "main.h"

/**
 * main - main entry
 * @argc: argument count
 * @argv: argument vector
 * Return: returns integer value
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (argc);
}
