#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: the string to count
 * Return: the number of words in the string
 */
int word_count(char *str)
{
int i, count = 0;


for (i = 0; str[i] != '\0'; i++)
{

if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
return (count);
}

/**
 * word_len - returns the length of a word
 * @str: the string to measure
 * Return: the length of the word
 */
int word_len(char *str)
{
int len = 0;


while (str[len] != ' ' && str[len] != '\0')
len++;

return (len);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
char **words;
int i, j, k, w, l;


if (str == NULL || str[0] == '\0')
return (NULL);


w = word_count(str);
words = malloc(sizeof(char *) * (w + 1));
if (words == NULL)
return (NULL);


i = 0;
j = 0;
while (i < w && str[j] != '\0')
    {

while (str[j] == ' ')
j++;


l = word_len(str + j);
words[i] = malloc(sizeof(char) * (l + 1));
if (words[i] == NULL)
{

while (i >= 0)
{
free(words[i]);
i--;
}
free(words);
return (NULL);
}


for (k = 0; k < l; k++)
words[i][k] = str[j + k];
words[i][k] = '\0';


i++;
j += l;
}
words[i] = NULL;

return (words);
}

