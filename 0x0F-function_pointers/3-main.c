#include "3-calc.h"

/**
 * main - performs simple operations on two integers
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, or exit with status 98, 99 or 100 on error
 */
int main(int argc, char **argv)
{
int num1, num2;
char operator;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2][0];

if ((operator == '/' || operator == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

func = get_op_func(argv[2]);

if (func == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", func(num1, num2));

return (0);
}

