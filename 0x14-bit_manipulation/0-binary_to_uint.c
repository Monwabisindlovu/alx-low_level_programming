#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is
 * an invalid character
 * or if the input string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

for (; *b; b++)
{
if (*b == '0')
result = result << 1;
else if (*b == '1')
result = (result << 1) | 1;
else
return (0);
}

return (result);
}

