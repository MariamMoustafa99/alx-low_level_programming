#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: pointer
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
