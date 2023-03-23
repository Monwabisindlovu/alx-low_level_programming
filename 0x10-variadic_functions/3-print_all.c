#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          any other char should be ignored
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char *str;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}

separator = ", ";
i++;
}

printf("\n");
va_end(args);
}
