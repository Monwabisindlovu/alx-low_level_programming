#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");
}

