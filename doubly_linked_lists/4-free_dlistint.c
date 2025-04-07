#include "lists.h"

/**
 * free_dlistint - free all allocated memory of the given list.
 * @head: The passed doubly linked list.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
