#include "main.h"

/**
 * _sqrt_helper - recursive helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @low: the lowest possible square root of n
 * @high: the highest possible square root of n
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root
 */
int _sqrt_helper(long n, long low, long high)
{
    if (low > high)
        return -1;
    long mid, mid_squared;

    mid = low + (high - low) / 2;
    mid_squared = mid * mid;
    
    if (mid_squared == n)
        return mid;
    else if (mid_squared < n)
        return _sqrt_helper(n, mid + 1, high);
    else
        return _sqrt_helper(n, low, mid - 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;

    return _sqrt_helper(n, 1, n / 2);
}

