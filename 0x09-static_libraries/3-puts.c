#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer to the string
 */
void _puts(char *s)
{
while (*s != '\0')
{
putchar(*s);
s++;
}
}

