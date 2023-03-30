#include "main.h"
#include <string.h>

/**
 * _strcat - appends second param to first
 * @dest: param to be appended to
 * @src: param to be appended
 * Return: returns the result of param one and two
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (strcat(dest, src));
}
