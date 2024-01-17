#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive helper function for
 * Advanced Binary Search
 * @array: Pointer to the first element of the array
 * @left: The left index of the search range
 * @right: The right index of the search range
 * @value: Value to search for
 *
 * Description: Performs a recursive binary search for a value
 * in a sorted array.
 * Prints the subarray being searched at each recursive call.
 *
 * Return: Index of the first occurrence of the value,
 * or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t
		right, int value);

/**
 * advanced_binary - Searches for a value in a sorted array using
 * Advanced Binary Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Description: Initiates the binary search and calls the
 * recursive helper function.
 *
 * Return: Index of the first occurrence of the value,
 * or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for
 * Advanced Binary Search
 * @array: Pointer to the first element of the array
 * @left: The left index of the search range
 * @right: The right index of the search range
 * @value: Value to search for
 *
 * Description: Performs a recursive binary search for a value in
 * a sorted array.
 * Prints the subarray being searched at each recursive call.
 *
 * Return: Index of the first occurrence of the value,
 * or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t
		right, int value)
{
size_t mid, i;

if (left <= right)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

mid = left + (right - left) / 2;

if (array[mid] == value)
{
if (mid == left || array[mid - 1] != value)
return ((int)mid);
return (advanced_binary_recursive(array, left, mid, value));
}

if (array[mid] < value)
return (advanced_binary_recursive(array, mid + 1, right, value));

return (advanced_binary_recursive(array, left, mid - 1, value));
}

return (-1);
}

