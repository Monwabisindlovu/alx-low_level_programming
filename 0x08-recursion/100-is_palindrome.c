#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
return check_palindrome(s, 0, length - 1);
}

/**
 * check_palindrome - Recursive function to check if a substring is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return 1;

if (s[start] != s[end])
return 0;

return check_palindrome(s, start + 1, end - 1);
}

