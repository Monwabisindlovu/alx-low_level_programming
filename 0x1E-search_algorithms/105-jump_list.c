#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *	using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in the list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is loacated
 *	else NULL if value is not present in head or head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index;
	listint_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	index = 0;

	while (index < size && list->next && list->n < value)
	{
		prev = list;
		index += sqrt(size);

		while (list->next && list->index < index)
			list = list->next;
		printf("Value checked at index [%ld] = [%d]\n",
				list->index, list->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, list->index);

	while (prev && prev->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
