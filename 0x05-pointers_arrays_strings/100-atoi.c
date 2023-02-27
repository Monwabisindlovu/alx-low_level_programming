#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int sign = 1, num = 0, i = 0;

while (s[i])
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
num = num * 10 + s[i] - '0';
if (num != 0 && !(s[i] >= '0' && s[i] <= '9'))
break;
i++;
}
return (num * sign);
}
