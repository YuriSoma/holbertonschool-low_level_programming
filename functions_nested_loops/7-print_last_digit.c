#include "main.h"

/**
 * print_last_digit - computes the absoulte value of an int.
 * @c: The character to be check
 *
 * Return: Abs value
 */
int print_last_digit(int c)
{
	int i;

	if (c < 0)
		i = -1 * (c % 10);
	else
		i = c % 10;

	_putchar((i % 10) + 0);
	return (i % 10);
}
