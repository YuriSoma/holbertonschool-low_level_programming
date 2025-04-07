#include "lists.h"

/**
 * add_dnodeint_end - add new node of the end of a doubly list.
 * @head: The passed doubly linked list.
 * @n: int number element of the list.
 *
 * Return: new node address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *old;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	old = *head;
	while (old->next != 0)
		old = old->next;
	old->next = new;
	new->prev = old;

	return (new);
}
