#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If memory allocation fails or head is NULL, return NULL.
 *         Otherwise, return the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (!head)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
