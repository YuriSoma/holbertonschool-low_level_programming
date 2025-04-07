#include "lists.h"

/**
 * sum_dlistint - get the the sum of all nodes data (n).
 * @head: The passed doubly linked list.
 *
 * Return: the sum.
 *
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
