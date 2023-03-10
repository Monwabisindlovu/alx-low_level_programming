#include <stdio.h>

/**
 * unused_function - Prints a message indicating that the function does nothing
 * @unused_parameter: An unused parameter
 *
 * Return: None
 */
void unused_function(int unused_parameter)
{
(void) unused_parameter; /* Mark the parameter as unused */
printf("This function does nothing!\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int unused_variable;
(void) unused_variable; /* Mark the variable as unused */
printf("Hello, world!\n");

return (0);
}
