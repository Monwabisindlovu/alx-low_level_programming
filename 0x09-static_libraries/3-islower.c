#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Return: 0 if not lowercase, 1 if lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

