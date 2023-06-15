#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int i, len;
int *array;

if (min > max)
return (NULL);

len = max - min + 1;

array = malloc(sizeof(int) * len);

if (array == NULL)
return (NULL);

for (i = 0; i < len; i++)
array[i] = min++;

return (array);
}

