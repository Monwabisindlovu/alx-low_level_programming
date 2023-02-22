#include <stdio.h>

int _abs(int);

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
int abs_val;

if (n < 0)
abs_val = n * -1;
else
abs_val = n;
return (abs_val);
}

