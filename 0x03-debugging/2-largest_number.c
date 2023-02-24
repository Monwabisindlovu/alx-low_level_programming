#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: the largest of the three integers
 */
int largest_number(int a, int b, int c)
{
int largest;

/* Determine which integer is largest using if-else statements */
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

/* Return the largest integer */
return (largest);
}
