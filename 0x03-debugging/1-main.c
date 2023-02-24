#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
putchar(i + '0');  /* Print the value of i as a character */
i++;               /* Increment the value of i */
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}

