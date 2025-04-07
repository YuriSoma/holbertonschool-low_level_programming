#include "lists.h"

/**
 * dlistint_len - counts all nodes of a given doubly linked list.
 * @h: a doubly linked list to count all its nodes.
 *
 * Return: count of all nodes of the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
