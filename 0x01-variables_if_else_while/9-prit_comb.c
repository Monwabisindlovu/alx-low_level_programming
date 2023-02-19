#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0, j = 0;

for (i = 0; i < 100; i++)
{
j = i + 1;

putchar((i / 10) + '0');
putchar((i % 10) + '0');

if (i < 89)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
return (0);
}
}

return (0);
}
