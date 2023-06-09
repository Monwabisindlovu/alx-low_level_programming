#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_min_coins - Calculates the minimum number of coins for change.
 * @cents: The amount of cents to make change for.
 *
 * Return: The minimum number of coins needed.
 */
int calculate_min_coins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int num_coins = 0;
int i;

if (cents < 0)
return (0);

for (i = 0; i < 5; i++)
{
if (cents >= coins[i])
{
num_coins += cents / coins[i];
cents %= coins[i];
}
}

return (num_coins);
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
int cents, num_coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

num_coins = calculate_min_coins(cents);

printf("%d\n", num_coins);

return (0);
}

