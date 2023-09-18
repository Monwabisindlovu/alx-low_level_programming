#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i;

/* find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* concatenate the source string onto the destination string */
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* add a null terminator to the end of the concatenated string */
dest[dest_len + i] = '\0';

/* return a pointer to the concatenated string */
return (dest);
}
