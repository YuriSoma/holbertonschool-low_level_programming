#include "lists.h"

/**
 * get_dnodeint_at_index - get the a list node by its index.
 * @head: The passed doubly linked list.
 * @index: node index to search with.
 *
 * Return: the returned node.
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
