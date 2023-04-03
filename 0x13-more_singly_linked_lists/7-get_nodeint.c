#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head node of list
 * @index: index of node to return, starting at 0
 *
 * Return: pointer to nth node, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

current = head;
for (i = 0; i < index && current != NULL; i++)
{
current = current->next;
}

return (current);
}
