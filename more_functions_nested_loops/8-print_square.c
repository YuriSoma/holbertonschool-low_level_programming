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
	for (a = size; a < 0; a--)
	{
		b = size;
		while (b < 0)
		{
			_putchar('#');
			b--;
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
