#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *express;

    if (list == NULL)
        return (NULL);

    express = list;
    while (express->express && express->express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               express->express->index, express->express->n);
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           express->index, express->express->index);

    current = express;
    while (current && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               current->index, current->n);
        current = current->next;
    }

    if (current && current->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               current->index, current->n);
        return (current);
    }

    return (NULL);
}

