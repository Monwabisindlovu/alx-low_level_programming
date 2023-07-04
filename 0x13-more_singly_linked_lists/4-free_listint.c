#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees the memory allocated for each node
 *              in a singly linked list of type listint_t.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}

