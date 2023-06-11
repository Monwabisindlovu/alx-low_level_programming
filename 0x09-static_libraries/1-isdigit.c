#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: (0) if not a digit, (1) if a digit
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

