#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the start of the list.
 * @index: index of the node to return.
 *
 * Return: the nth node of a dlistint_t linked list, or NULL
 * if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int count = 0;

current = head;
while (current != NULL)
{
if (count == index)
{
return (current);
}
count++;
current = current->next;
}
return (NULL);
}

