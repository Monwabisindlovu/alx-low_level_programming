#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1
 * if not found or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump, prev, i;

if (array == NULL)
return (-1);

jump = sqrt(size);
prev = 0;

printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

while (prev < size && array[prev] < value)
{
prev += jump;
if (prev >= size)
prev = size - 1;

printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
}

i = prev - jump + 1;
printf("Value found between indexes [%ld] and [%ld]\n", i, prev);

for (; i <= prev && i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}

