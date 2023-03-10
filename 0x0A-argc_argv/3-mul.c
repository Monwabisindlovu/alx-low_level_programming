#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int i, product = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}

for (i = 1; i < argc; i++)
{

int num = atoi(argv[i]);
if (num == 0)
{
printf("Error\n");
return (1);
}
product *= num;
}

printf("%d\n", product);
return (0);
}
