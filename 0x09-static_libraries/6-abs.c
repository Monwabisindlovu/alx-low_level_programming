#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic letter
 * @c: character to check
 *
 * Return: (0) if not an alphabetic letter, (1) if an alphabetic letter
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}

