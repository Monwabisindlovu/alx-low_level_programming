#include <stdio.h>

/**
 * print_arguments - Prints all the arguments received.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 */
void print_arguments(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
print_arguments(argc, argv);
return 0;
}

