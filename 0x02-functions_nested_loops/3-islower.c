#include <stdio.h>

/**
* _islower - Checks whether a character is lowercase
* @c: The character to check
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c);

/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
char c = 'a';

if (_islower(c))
{
printf("%c is lowercase.\n", c);
}
else
{
printf("%c is not lowercase.\n", c);
}

return (0);
}
