#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a double linked list
 * @head: pointer to the address of head node
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
