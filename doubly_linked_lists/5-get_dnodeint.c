#include "lists.h"

/**
 * free_dlistint - free all allocated memory of the given list.
 * @head: The passed doubly linked list.
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (0);
		head = head->next;
		index--;
	}

	return (head);
}
