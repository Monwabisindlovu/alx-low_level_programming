#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node at a specific
 * index from a linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @index: The index of the desired node.
 *
 * Return: If the node is found, returns a pointer to the node.
 * Otherwise, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *node;

i = 0;
node = head;

while (node != NULL && i < index)
{
node = node->next;
i++;
}

if (i == index)
{
return (node);
}
else
{
return (NULL);
}
}

