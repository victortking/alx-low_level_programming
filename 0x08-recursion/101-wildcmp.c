#include "main.h"

/**
 * wildcmp - compares two strings using wildcards
 * @s1: the first string
 * @s2: the second string (may contain wildcards)
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '\0') /* '*' is the last character, matches anything */
            return (1);
        if (*s1 == '\0') /* the first string is empty but '*' matches an empty string */
            return (wildcmp(s1, s2 + 1));
        return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); /* try to match with or without current character */
    }
    if (*s1 == '\0') /* the first string is empty but we reached the end of the second string */
        return (*s2 == '\0');
    if (*s1 != *s2) /* current characters do not match */
        return (0);
    return (wildcmp(s1 + 1, s2 + 1)); /* recursively compare the rest of the strings */
}

