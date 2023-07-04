#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}

