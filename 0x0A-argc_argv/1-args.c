#include <stdio.h>

/**
 * my_func - an example function with an unused parameter
 * @unused_param: a parameter that is not used in the function body
 *
 * Return: none
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
/* do something else */
}

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int __attribute__((unused)) x = 10;
int y = 20;

printf("%d\n", argc - 1);
my_func(y);

return (0);
}
