#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given index.
 * @h: pointer to a pointer to a doubly linked list.
 * @idx: a given index.
 * @n: integer data for the new node.
 *
 * Return: address of the new node.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		temp = temp->next;
		if (temp == 0)
			return (0);
		idx--;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
