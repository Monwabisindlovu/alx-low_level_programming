#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * linked list.
 * @head: double pointer to the start of the list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int count = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}

current = *head;
while (current != NULL)
{
if (count == index)
{
if (current->prev != NULL)
{
current->prev->next = current->next;
}
if (current->next != NULL)
{
current->next->prev = current->prev;
}
if (count == 0)
{
*head = current->next;
}
free(current);
return (1);
}
count++;
current = current->next;
}
return (-1);
}

