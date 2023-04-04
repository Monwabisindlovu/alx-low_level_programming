#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to a pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *prev = NULL;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}

for (unsigned int i = 0; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}

if (current == NULL)
return (-1);

prev->next = current->next;
free(current);

return (1);
}
