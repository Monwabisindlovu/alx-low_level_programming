#include "main.h"
#include <ctype.h> /* for toupper() function */

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;

/* capitalize the first letter of the string */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = toupper(str[i]);
i++;

while (str[i] != '\0')
{
/* capitalize the first letter of each word */
if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = toupper(str[i]);
}
i++;
}

return (str);
}
