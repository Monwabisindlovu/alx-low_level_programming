#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The input string
 * Return: The number of words
 */
int word_count(char *str)
{
int i, count = 0, len = 0;

for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
if (len == 0)
count++;
len++;
}
else
len = 0;
}

return (count);
}

/**
 * free_grid - Frees a 2 dimensional grid of integers
 * @grid: The grid to free
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int i, j, k, count = 0, len = 0, word_len = 0;

if (str == NULL || str[0] == '\0')
return (NULL);

count = word_count(str);
if (count == 0)
return (NULL);

words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
if (len == 0)
word_len = 0;
len++;
word_len++;
}
else if (len > 0)
{
words[k] = malloc(sizeof(char) * (word_len + 1));
if (words[k] == NULL)
{
free_grid((int **)words, k);
return (NULL);
}

for (j = i - len; j < i; j++)
words[k][j - (i - len)] = str[j];
words[k][j - (i - len)] = '\0';
k++;
len = 0;
}
}

words[k] = NULL;
return (words);
}

