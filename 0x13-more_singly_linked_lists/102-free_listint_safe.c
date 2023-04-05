#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the address of the head of the list_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *hold;
size_t count = 0;

if (h == NULL || *h == NULL)
return (count);

current = *h;
while (current != NULL)
{
count++;
hold = current;
current = current->next;
free(hold);

if (hold <= current)
{
*h = NULL;
exit(98);
}
}

*h = NULL;

return (count);
}
