#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0 || n == 1)
		return n;
	else
		return square_root_helper(n, 1, n);
}

int square_root_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid <= 0)
		return -1;

	if (mid * mid == n || (mid * mid < n && (mid + 1) * (mid + 1) > n))
		return mid;

	if (mid * mid < n)
		return square_root_helper(n, mid + 1, end)
	else
		return square_root_helper(n, start, mid - 1);
}

