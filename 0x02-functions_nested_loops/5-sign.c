#include <stdio.h>

/**
*print_sign - prints the sign of a number
*@n: the number to check
*Return: 1 if the number is positive 
*0 if it is zero, and -1 if it is negative
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
