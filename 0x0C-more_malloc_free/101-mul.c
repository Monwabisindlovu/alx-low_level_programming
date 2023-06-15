i#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number as a string
 * @num2: Second number as a string
 *
 * Description: Multiplies two positive numbers and prints the result
 */
void multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j;
int *result;


while (num1[len1])
len1++;
while (num2[len2])
len2++;

result = calloc(len1 + len2, sizeof(int));


for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int digit1 = num1[i] - '0';
int digit2 = num2[j] - '0';
int product = digit1 * digit2;

int sum = result[i + j + 1] + product;
result[i + j + 1] = sum % 10;
result[i + j] += sum / 10;
}
}


i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
i++;


for (; i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");


free(result);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: Program entry point, multiplies two positive numbers
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
int i, j;


if (argc != 3)
{
printf("Error\n");
return (98);
}


for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (98);
}
}
}

multiply(argv[1], argv[2]);

return (0);
}

