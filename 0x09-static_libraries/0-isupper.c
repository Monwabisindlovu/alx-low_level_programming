#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 *
 * Return: (0) if not uppercase, (1) if uppercase
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

