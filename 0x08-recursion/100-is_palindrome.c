#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = strlen(s);
    int i, j;

    if (len <= 1)
        return 1;

    i = 0;
    j = len - 1;

    while (i < j)
    {
        while (!isalnum(s[i]) && i < j)
            i++;
        while (!isalnum(s[j]) && i < j)
            j--;

        if (tolower(s[i]) != tolower(s[j]))
            return 0;

        i++;
        j--;
    }

    return 1;
}

