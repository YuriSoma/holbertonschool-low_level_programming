#include "lists.h"

/**
 * print_dlistint - prints all elements of a given doubly linked list.
 * @h: a doubly linked list to print all its elements.
 *
 * Return: count of all nodes of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
