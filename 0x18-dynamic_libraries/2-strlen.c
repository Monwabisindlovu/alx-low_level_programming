#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\0')
i++;
return (i);
}
