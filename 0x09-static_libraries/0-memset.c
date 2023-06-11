#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: value to be set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}

