#include <stdio.h>
/**
*main -entry point
*Return 0 (success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %ld byte(s)\n", sizeof(a));
printf("Size of int: %ld byte(s)\n", sizeof(b));
printf("Size of long int: %ld byte(s)\n", sizeof(c));
printf("Size of long long int: %ld byte(s)\n", sizeof(d));
printf("Size of float: %ld byte(s)\n", sizeof(f));

return 0;
}
