#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees each node of a linked list and the
 * memory allocated for the string in each node.
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}

