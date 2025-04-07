#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node by its index.
 * @head: a given doubly linked list.
 * @index: a given index.
 *
 * Return: 1 on Success, or -1 on failure.
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!head)
		return (-1);
	while (index != 0)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
		index--;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = 0;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != 0)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
