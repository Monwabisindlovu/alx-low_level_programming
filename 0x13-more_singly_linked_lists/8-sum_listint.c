#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data values in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of the data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *node = head;

while (node != NULL)
{
sum += node->n;
node = node->next;
}

return (sum);
}

