#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * print_error - Prints an error message.
 */
void print_error(void)
{
printf("Error\n");
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int i, num, sum;

sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
num = 0;
if (!is_digit(argv[i][0]) && argv[i][0] != '-')
{
print_error();
return (1);
}

num = atoi(argv[i]);
sum += num;
}

printf("%d\n", sum);
return (0);
}

