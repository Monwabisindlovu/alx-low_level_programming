#include "main.h"

/**
 * palindrome_helper - checks if a string is a palindrome (helper function)
 * @s: the string to check
 * @start: the starting index of the current substring to check
 * @end: the ending index of the current substring to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int start, int end)
{
/* Base case: substring has length 0 or 1 */
if (start >= end)
return (1);

/* Recursive case: check if the first and last characters match */
if (s[start] == s[end])
return (palindrome_helper(s, start + 1, end - 1));

/* Characters don't match, not a palindrome */
return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0;

/* Find the length of the string */
while (*(s + len))
len++;

return (palindrome_helper(s, 0, len - 1));
}
