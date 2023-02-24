#include <stdio.h>

/**
 * positive_or_negative - Determines whether a number is positive or negative
 * @n: The number to check
 *
 * Return: void
 */
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}
