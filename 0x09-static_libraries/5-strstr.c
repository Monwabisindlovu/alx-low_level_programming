#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: pointer to the string to search within
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack)
{
h = haystack;
n = needle;

while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}

if (!*n)
return (h);

haystack = h + 1;
}

return (NULL);
}

