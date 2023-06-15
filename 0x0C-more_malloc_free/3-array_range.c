#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: Pointer to the newly created array, or
 * NULL on failure or if min > max
 *
 */
int *array_range(int min, int max)
{
int *array, i, size;

if (min > max)
return (NULL);

size = max - min + 1;

array = malloc(size * sizeof(*array));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min++;

return (array);
}

