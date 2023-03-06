#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{

while (*s != '\0' && *s != c)
{
s++;
}

if (*s == c)
{
return (s);
}

return (NULL);
}
