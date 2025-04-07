#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new element for a giving list.
 * @head: pointer of a pointer to a list. 
 * @str: a string to be duplicated to the new node.
 *
 * Return: the address of the new created node.
 *
 * Description: the linked list structure will have 3 items:
 * 1- str: a string 2- len: length of the string 3- next: pointer of next node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(list_t);
	if (new == NULL)
	{
		return (0);
	}
	new->str = strdup(str);
	*head = new;

	return (*head);
}
