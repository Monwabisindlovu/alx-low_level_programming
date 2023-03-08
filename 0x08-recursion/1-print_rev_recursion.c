#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: The string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
return;

/* Recursive call with next character */
_print_rev_recursion(s + 1);

/* Print current character */
_putchar(*s);
}
