#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the initial string
 * @accept: pointer to the string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s consisting
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match = 1;

while (*s && match)
{
char *a = accept;
match = 0;

while (*a)
{
if (*s == *a)
{
match = 1;
count++;
break;
}
a++;
}

if (match)
s++;
}

return count;
}

