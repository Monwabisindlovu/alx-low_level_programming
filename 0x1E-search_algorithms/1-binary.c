#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where value is located or -1 if not
 * found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t right = size - 1;
size_t mid;

if (array == NULL)
return (-1);

while (left <= right)
{
print_array(array + left, right - left + 1);
mid = left + (right - left) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @size: Number of elements in the array.
 */
void print_array(const int *array, size_t size)
{
size_t i;

printf("Searching in array: ");
for (i = 0; i < size; i++)
{
printf("%d", array[i]);
if (i < size - 1)
printf(", ");
}
printf("\n");
}

