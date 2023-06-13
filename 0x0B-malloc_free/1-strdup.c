#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 * Return: a pointer to the duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
char *dup;
int len = 0;
int i;

if (str == NULL)
return (NULL);


while (str[len])
len++;


dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);


for (i = 0; i < len; i++)
dup[i] = str[i];
dup[i] = '\0';

return (dup);
}

