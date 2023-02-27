#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null
 * byte, to the buffer pointed to by dest
 * @dest: the buffer to copy the string to
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)

{
int i = 0;

while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';

return (dest);
}
