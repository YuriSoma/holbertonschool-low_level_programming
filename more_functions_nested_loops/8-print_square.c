#include "main.h"

/**
 * print_square - prints square as passing size.
 * @size: the size of the square.
 *
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
