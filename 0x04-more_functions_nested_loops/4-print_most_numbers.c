#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 (except 2 and 4)
 * followed by a newline
 * Return: void
 */
void print_most_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
if (num != 2 && num != 4)
{
_putchar(num + '0');
}
}

_putchar('\n');
}
