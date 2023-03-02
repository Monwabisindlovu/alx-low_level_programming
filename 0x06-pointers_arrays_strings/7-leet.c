#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: the encoded string
 */

char *leet(char *str)
{
int i, j;
char leet[] = "aAeEoOtTlL44337071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet[j])
{
str[i] = leet[j + 10];
break;
}
}
}

return (str);
}

