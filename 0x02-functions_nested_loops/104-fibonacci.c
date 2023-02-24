#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
int i;
unsigned long long int a = 1, b = 2, c;

printf("%llu, %llu", a, b);

for (i = 3; i <= 98; i++)
{
c = a + b;
printf(", %llu", c);

a = b;
b = c;
}

printf("\n");

return (0);
}
