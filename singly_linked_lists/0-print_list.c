#include <stdio.h>
#include <stdlib.h>
#include <lists.h>

/**
 * print_list - prints all the linked list items.
 * @h: struct linked list which the function will print its items.
 *
 * Return: counts of all nodes of the linked list with type size_t
 *
 * Description: the linked list structure will have 3 items:
 * 1- str: a string 2- len: length of the string 3- next: pointer of next node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%u] (%s)\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
