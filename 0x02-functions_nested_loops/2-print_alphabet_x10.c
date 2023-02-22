#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
*
* Return: void
*/
void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 25; j++)
{
_putchar('a' + j);
}
_putchar('\n');
}
}
