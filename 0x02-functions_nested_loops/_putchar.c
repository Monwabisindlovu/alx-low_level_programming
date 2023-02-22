#include "maini.h"
#include <unistd.h>
/**
*putchar - write the charecter c to stdout
*@c: the charecter to print
*
*Return: On success l.
*On error, -l is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(l, &c, l));
} 

