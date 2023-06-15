#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if the allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, concat_len;
char *concat;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";


len1 = strlen(s1);
len2 = strlen(s2);


if (n >= len2)
n = len2;


concat_len = len1 + n;

concat = malloc((concat_len + 1) * sizeof(char));
if (concat == NULL)
return (NULL);


strcpy(concat, s1);


strncat(concat, s2, n);

return (concat);
}

