#include "main.h"

/**
 * print_sign - checks if the number is >, < or = 0
 * Then prints the +, - or 0 depends on the resuilt
 * @c: The character to be check
 *
 * Return: 1 if c is greater than 0, -1 if less than 0.
 * If c equals 0, 0 is returned.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	} else if (c < 0)
	{
		_putchar('-');
		return (-1);
	} else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
}
