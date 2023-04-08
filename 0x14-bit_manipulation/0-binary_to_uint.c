#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int bit_value = 1;
int i, len;

if (!b)
return (0);

len = strlen(b);

for (i = len - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);

if (b[i] == '1')
result += bit_value;

bit_value *= 2;
}

return (result);
}
