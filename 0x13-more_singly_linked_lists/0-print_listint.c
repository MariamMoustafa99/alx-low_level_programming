#include "lists.h"

/**
 * print_listint - prints all elements of list
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
