#include <stdlib.h>

/**
 * a function that creates an array of charecters, and initializes it with a specific charecter
 *@c: The character to print
 *
 *Return: success 0
*/

char *create_array(unsigned int size, char c)
{
  char *arr;
  unsigned int i;

  if (size == 0)
    return (NULL);

  arr = malloc(size * sizeof(char));
  if (arr == NULL)
    return (NULL);

  for (i = 0; i < size; i++)
    arr[i] = c;

  return (arr);
}
