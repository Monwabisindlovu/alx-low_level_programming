#include <stdio.h>

/**
 * main - Finds the sum of the even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int a = 1, b = 2, c, sum = 2;

for (i = 3; i <= 33; i++)
{
c = a + b;
a = b;
b = c;

if (c % 2 == 0)
{
sum += c;
}
}

printf("%ld\n", sum);

return (0);
}
