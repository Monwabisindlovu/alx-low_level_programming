#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in
 * a linked list.
 *
 * @head: A double pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The data value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current_node;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current_node = *head;
for (i = 0; i < idx - 1; i++)
{
if (current_node == NULL)
{
free(new_node);
return (NULL);
}
current_node = current_node->next;
}
if (current_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current_node->next;
current_node->next = new_node;

return (new_node);
}

