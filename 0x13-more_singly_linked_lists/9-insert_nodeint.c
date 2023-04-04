#include  "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head node
 * @idx: index of list where new node should be added
 * @n: data to be added to new node
 *
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = NULL;
listint_t *current = *head;
unsigned int i = 0;

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

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL)
return (NULL);

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
