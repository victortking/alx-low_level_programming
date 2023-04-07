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
    size_t len = strlen(s);

    /* base case: empty or one-character string is always a palindrome */
    if (len == 0 || len == 1)
        return 1;

    /* recursive case: check if first and last characters match,
     * and recursively check the remaining substring */
    if (*s == *(s + len - 1))
        return is_palindrome(s + 1) && is_palindrome(s + len - 2);
    else
        return 0;
}

