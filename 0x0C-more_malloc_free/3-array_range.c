#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
int *arr, i;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = 0; i < (max - min + 1); i++)
arr[i] = min + i;

return (arr);
}

