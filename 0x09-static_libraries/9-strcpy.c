#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (dest_start);
}

