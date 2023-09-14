#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the start of the list.
 * @idx: index of the list where the new node should be added.
 * @n: integer to be included in the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current;
unsigned int count = 0;

if (h == NULL)
{
return (NULL);
}
if (idx == 0)
{
return (add_dnodeint(h, n));
}
current = *h;
while (current != NULL)
{
if (count == idx - 1)
{
if (current->next == NULL)
{
return (add_dnodeint_end(h, n));
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = current;
new_node->next = current->next;
current->next->prev = new_node;
current->next = new_node;
return (new_node);
}
count++;
current = current->next;
}
return (NULL);
}
