#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: pointer to the head node of the list
 *
 * Return: the sum of all the data (n) in the nodes,or 0
 * if the list is empty
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
