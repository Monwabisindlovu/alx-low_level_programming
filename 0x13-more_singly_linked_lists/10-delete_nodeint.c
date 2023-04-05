#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the pointer to the head node.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *prev = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}

while (current != NULL && i < index)
{
prev = current;
current = current->next;
i++;
}

if (current == NULL)
return (-1);

prev->next = current->next;
free(current);

return (1);
}
