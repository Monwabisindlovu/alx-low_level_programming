#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0, i;

if (*s == '\0')
return (1);

while (s[len] != '\0')
len++;

for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - 1 - i])
return (0);
}

return (1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = is_palindrome("level");
printf("%d\n", r);
r = is_palindrome("redder");
printf("%d\n", r);
r = is_palindrome("test");
printf("%d\n", r);
r = is_palindrome("step on no pets");
printf("%d\n", r);
return (0);
}
