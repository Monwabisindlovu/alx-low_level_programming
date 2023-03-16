#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and initialize with 0
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL if nmemb or size is 0,
 *         or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *ptr_ch;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

ptr_ch = ptr;
for (i = 0; i < nmemb * size; i++)
*(ptr_ch + i) = 0;

return (ptr);
}
