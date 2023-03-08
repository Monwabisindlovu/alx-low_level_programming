#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 *
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')  /* Base case: end of string */
{
putchar('\n');  /* Print new line */
return;  /* Exit function */
}

putchar(*s);  /* Print current character */
_puts_recursion(s + 1);  /* Call function recursively with next character */
}
