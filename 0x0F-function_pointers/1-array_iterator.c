#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a specified action on each element of an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to be applied on each element.
 *
 * Description: This function iterates over each element of the array and
 * applies the specified action to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);
}

