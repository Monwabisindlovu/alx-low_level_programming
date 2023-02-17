#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;

while (digit < 10)
{
putchar(digit / 10 + '0');
putchar(digit % 10 + '0');
digit++;
}

putchar('\n');

return (0);
}
