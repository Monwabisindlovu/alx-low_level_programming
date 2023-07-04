#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given index in 
 * a linked list.
 *
 * @head: A double pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion is successful, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *temp_node;
unsigned int i;

if (head == NULL || *head == NULL)
return -1;

if (index == 0)
{
temp_node = *head;
*head = (*head)->next;
free(temp_node);
return (1);
}

current_node = *head;
for (i = 0; i < index - 1; i++)
{
if (current_node->next == NULL)
return (-1);
current_node = current_node->next;
}

if (current_node->next == NULL)
return (-1);
temp_node = current_node->next;
current_node->next = temp_node->next;
free(temp_node);

return (1);
}

