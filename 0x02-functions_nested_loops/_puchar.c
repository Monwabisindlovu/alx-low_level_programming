#include <unistd.h>
/**
*_putchar - writes the charecter c to stdout
*@c: The charectoer to print 
*Return: 0n success 1.
*0n error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
return(write(1, &c, 1));
}
