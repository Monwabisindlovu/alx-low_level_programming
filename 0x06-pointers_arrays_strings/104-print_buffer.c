#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = i; j < i + 10; j += 2)
{
if (j < size)
printf("%02x", *(b + j));
else
printf("  ");

if (j + 1 < size)
printf("%02x ", *(b + j + 1));
else
printf("   ");
}

for (j = i; j < i + 10; j++)
{
if (j >= size)
break;

if (*(b + j) >= ' ' && *(b + j) <= '~')
printf("%c", *(b + j));
else
printf(".");
}

printf("\n");
}
}
