#include "holberton.h"
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: EXIT_SUCCESS on success
 */
int main(void)
{
int r;

r = print_last_digit(98);
_putchar('0' + r);
_putchar('\n');

r = print_last_digit(0);
_putchar('0' + r);
_putchar('\n');

r = print_last_digit(-98);
_putchar('0' + r);
_putchar('\n');

return (EXIT_SUCCESS);
}
