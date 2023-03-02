#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
char *ptr = str;
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int i, j;

for (i = 0; str[i]; i++)
{
for (j = 0; normal[j]; j++)
{
if (str[i] == normal[j])
{
str[i] = rot[j];
break;
}
}
}
return (ptr);
}
