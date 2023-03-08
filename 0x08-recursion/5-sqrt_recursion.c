#include "main.h"

/**
 * find_sqrt - Recursively searches for the natural square root of a number.
 * @n: The number to find the square root of.
 * @start: The starting value for the binary search.
 * @end: The ending value for the binary search.
 *
 * Return: The natural square root of n if it exists, or -1 if it does not.
 */
int find_sqrt(int n, int start, int end)
{
if (start <= end)
{
int mid = (start + end) / 2;
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square > n)
{
return (find_sqrt(n, start, mid - 1));
}
else
{
return (find_sqrt(n, mid + 1, end));
}
}

return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n if it exists, or -1 if it does not.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (find_sqrt(n, 0, n));
}
