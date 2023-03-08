#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0') /* base case: end of string */
        return;

    _print_rev_recursion(s + 1); /* recursive call with next character */

    _putchar(*s); /* print current character */
}
