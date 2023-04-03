#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *               and returns the head node’s data (n)
 * @head: pointer to pointer to head node of list
 *
 * Return: head node's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

n = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (n);
}
