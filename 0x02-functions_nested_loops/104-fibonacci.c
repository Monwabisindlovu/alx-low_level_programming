#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
int i;
unsigned long int a = 1, b = 2, c;

printf("%lu, %lu, ", a, b);

for (i = 3; i <= 98; i++)
{
c = a + b;
printf("%lu", c);

if (i != 98)
{
printf(", ");
}

a = b;
b = c;
}

printf("\n");

return (0);
}
