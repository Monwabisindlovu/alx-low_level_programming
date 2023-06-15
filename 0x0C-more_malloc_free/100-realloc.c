#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 *         If new_size is equal to zero, and ptr is not NULL, return NULL
 *         If malloc fails, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr;
unsigned int i, min_size;


if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}


if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}


new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);


old_ptr = ptr;
min_size = old_size < new_size ? old_size : new_size;
for (i = 0; i < min_size; i++)
new_ptr[i] = old_ptr[i];

free(ptr);

return (new_ptr);
}

