#include "main.h"

/**
 * _atoi - converts a string to an integer.
 *
 * @s: pointer to the string to convert.
 *
 * Return: the converted integer value.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int i = 0;

while (s[i])
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
num = num * 10 + (s[i] - '0');
if (num != 0 && !(s[i] >= '0' && s[i] <= '9'))
break;
i++;
}

return (num * sign);
}
