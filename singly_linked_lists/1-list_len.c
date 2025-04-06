#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the length of a giving linked list.
 * @h: struct linked list which the function will counts its items.
 *
 * Return: counts of all nodes of the linked list with type size_t
 *
 * Description: the linked list structure will have 3 items:
 * 1- str: a string 2- len: length of the string 3- next: pointer of next node
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}

	return (count);
}
