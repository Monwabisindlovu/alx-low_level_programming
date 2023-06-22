#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: The list of types of arguments passed to the function
 *
 *Description: This function prints a variable number of arguments based on the
 *provided format string. The format string specifies the type of
 *each argument. It supports char (c), integer (i), float (f), and
 *string (s) types. NULL strings are printed as (nil). The arguments
 *are separated by commas and followed by a new line.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *sep = "";

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
}
default:
i++;
continue;
}
sep = ", ";
i++;
}

va_end(args);
printf("\n");
}

