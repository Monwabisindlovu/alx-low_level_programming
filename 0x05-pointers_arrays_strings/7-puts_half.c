#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: the string to print
 */
void puts_half(char *str)
{
int len = 0;
int i, n;

while (*(str + len))
len++;

n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

for (i = n; i < len; i++)
_putchar(*(str + i));

_putchar('\n');
}
