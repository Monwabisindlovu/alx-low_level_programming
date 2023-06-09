#include "main.h"

/**
 * print_number_of_arguments - Prints the number of arguments passed
 * @argc: The number of command-line arguments
 *
 * Return: None
 */
void print_number_of_arguments(int argc)
{
printf("%d\n", argc - 1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv;

print_number_of_arguments(argc);

return 0;
}

