#include "main.h"

/**
 * print_last_digit - computes the absoulte value of an int.
 * @c: The character to be check
 *
 * Return: Abs value
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -1 * (c % 10);
		_putchar(c % 10);
		return (c % 10);
	}
	c %= 10;
	_putchar(c % 10);
	return (c % 10);
}
