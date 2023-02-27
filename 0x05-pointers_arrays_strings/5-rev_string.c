#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 */

void rev_string(char *s)
{
int length = 0;
char temp;
int i;

/* Find the length of the string */
while (*(s + length) != '\0')
{
length++;
}

/* Swap characters from start and end of the string */
for (i = 0; i < length / 2; i++)
{
temp = *(s + i);
*(s + i) = *(s + length - i - 1);
*(s + length - i - 1) = temp;
}
}
