#include "lists.h"

/**
 * dlistint_len - counts all nodes of a given doubly linked list.
 * @h: a doubly linked list to count all its nodes.
 *
 * Return: count of all nodes of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
