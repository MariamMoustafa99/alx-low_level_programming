#include "lists.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}

/**
 * print_list - prints all elements of list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nill)");
		h = h->next;
		m++;
	}
	return (m);
}
