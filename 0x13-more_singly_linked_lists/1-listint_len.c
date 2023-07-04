#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

