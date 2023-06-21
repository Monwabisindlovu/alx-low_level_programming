#include <stdio.h>

/**
 * print_name - Print name using function pointer.
 * @name: Pointer to a character array representing the name.
 * @f: Pointer to a function that takes a character pointer as an argument.
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *)) {
if (name == NULL || f == NULL)
return;

f(name);
}

