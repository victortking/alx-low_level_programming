#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies src into dest
 * @dest: pointer to recieve src
 * @src: pointer to copy
 * Return: returns c
 */
char *_strcpy(char *dest, char *src)
{
	char *c;

	c = strcpy(dest, src);

	return (c);
}
