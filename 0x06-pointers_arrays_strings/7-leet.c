#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
char *p = s;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int i;

while (*p)
{
i = 0;
while (letters[i])
{
if (*p == letters[i])
{
*p = numbers[i];
break;
}
i++;
}
p++;
}

return (s);
}
