#include <stdlib.h>
#include <time.h>
#include <stdio.h>  // need to include this header for printf function

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

// Check whether n is positive, negative, or zero, and print the result
if (n > 0) {
printf("%d is positive\n", n);
} else if (n == 0) {
printf("%d is zero\n", n);
} else {
printf("%d is negative\n", n);
}

return (0);
}
