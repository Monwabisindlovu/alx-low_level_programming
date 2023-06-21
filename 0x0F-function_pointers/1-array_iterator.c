#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Prints an integer.
 * @elem: The integer to print.
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
printf("%d\n", elem);
}

/**
 * print_elem_hex - Prints an integer in hexadecimal.
 * @elem: The integer to print.
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
printf("0x%x\n", elem);
}

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
int array[5] = {0, 98, 402, 1024, 4096};

array_iterator(array, 5, &print_elem);
array_iterator(array, 5, &print_elem_hex);
return (0);
}

