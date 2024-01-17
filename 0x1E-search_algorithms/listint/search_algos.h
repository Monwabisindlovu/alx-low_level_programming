#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer stored in the node
 * @next: Pointer to the next node
 * @index: Index of the node in the list
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of elements in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */

