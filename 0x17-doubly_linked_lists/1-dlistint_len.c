#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the start of the list.
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current;
size_t size = 0;

current = h;
while (current != NULL)
{
current = current->next;
size++;
}
return (size);
}

