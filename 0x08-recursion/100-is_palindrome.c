#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    /* base case: empty or one-character string is always a palindrome */
    if (*s == '\0' || *(s + 1) == '\0')
        return 1;

    /* recursive case: check if first and last characters match,
     * and recursively check the remaining substring */
    if (*s == *(s + strlen(s) - 1))
        return is_palindrome(s + 1) && is_palindrome(s + strlen(s) - 1);
    else
        return 0;
}

