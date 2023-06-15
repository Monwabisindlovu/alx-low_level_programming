#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 * If malloc fails, the function terminates with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(98);
}
return ptr;
}

int main(void)
{
char *c;
int *i;
float *f;

c = malloc_checked(sizeof(char) * 1024);
printf("%p\n", (void *)c);
i = malloc_checked(sizeof(int) * 402);
printf("%p\n", (void *)i);
f = malloc_checked(sizeof(float) * 100000000);
printf("%p\n", (void *)f);
free(c);
free(i);
free(f);
return (0);
}
