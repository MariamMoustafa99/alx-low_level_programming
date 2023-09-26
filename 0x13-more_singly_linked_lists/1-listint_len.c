#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
