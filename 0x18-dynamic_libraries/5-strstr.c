#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_ptr, *needle_ptr;

while (*haystack != '\0')
{
haystack_ptr = haystack;
needle_ptr = needle;

while (*needle_ptr == *haystack_ptr && *needle_ptr != '\0'
&& *haystack_ptr != '\0')
{
haystack_ptr++;
needle_ptr++;
}

if (*needle_ptr == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
