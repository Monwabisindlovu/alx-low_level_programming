#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element that matches, or -1 if none or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}

