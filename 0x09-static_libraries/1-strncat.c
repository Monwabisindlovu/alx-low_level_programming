#include "main.h"

/**
 * _strncat - concatenates two strings, up to n characters from source
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to append
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest != '\0')
dest++;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (dest_start);
}

