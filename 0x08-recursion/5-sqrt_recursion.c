#include "main.h"

/**
 * calculate_sqrt - Calculates the square root of a number using recursion
 *
 * @n: number to calculate square root of
 * @i: integer to check as a possible square root
 *
 * Return: square root of @n or -1 if it doesn't exist
 */
int calculate_sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
return (calculate_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: number to calculate square root of
 *
 * Return: square root of @n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (calculate_sqrt(n, 0));
}
