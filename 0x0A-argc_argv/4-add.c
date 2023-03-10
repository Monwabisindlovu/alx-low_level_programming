#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}

	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int count, sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
			sum += atoi(argv[count]);
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);
	return (0);
}
