#include "lists.h"

/**
 * add_dnodeint - add new node of the beginning of a doubly list.
 * @head: The passed doubly linked list.
 * @n: int number element of the list.
 *
 * Return: new node address.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
