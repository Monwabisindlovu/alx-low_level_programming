#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
return (s);
a++;
}

s++;
}

return(NULL);
}

