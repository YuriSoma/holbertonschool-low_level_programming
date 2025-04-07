#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new element for a giving list at the end of it.
 * @head: pointer of a pointer to a list.
 * @str: a string to be duplicated to the new node.
 *
 * Return: the address of the new created node.
 *
 * Description: the linked list structure will have 3 items:
 * 1- str: a string 2- len: length of the string 3- next: pointer of next node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	old = malloc(sizeof(list_t));
	if (new == NULL || old == NULL)
		return (0);
	if (!strdup(str))
	{
		free(new);
		return (0);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	new->str = strdup(str);
	new->len = len;

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		

	}
	return (new);
}
