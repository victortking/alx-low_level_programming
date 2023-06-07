#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);
	
	if (s[0] != s[len - 1])
			return (0);

	s[len - 1] = '\0';

	return is_palindrome(s + 1);
}
