#include <stdio.h>

/**
* test_islower - Tests whether a character is lowercase.
* @c: The character to test.
*
* Return: void.
*/
void test_islower(int c);

/**
* main - Entry point of the program.
*
* Return: Always 0.
*/
int main(void)
{
test_islower('a');
test_islower('A');
test_islower('z');
test_islower('{');
return (0);
}

/**
* test_islower - Tests whether a character is lowercase.
* @c: The character to test.
*
* Return: void.
*/
void test_islower(int c)
{
int r;

r = _islower(c);
printf("%c: %d\n", c, r);
_putchar(r + '0');
_putchar('\n');
}
