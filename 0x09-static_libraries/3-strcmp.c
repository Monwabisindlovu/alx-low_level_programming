#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are equal, negative value if s1 < s2,
 *         positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
i++;
    
return (s1[i] - s2[i]);
}

