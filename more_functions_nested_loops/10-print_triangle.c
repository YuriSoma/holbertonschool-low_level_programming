#include "main.h"

/**
 * print_triangle - prints triangle as passing size.
 * @size: the size of the triangle.
 *
 */
void print_triangle(int size)
{
	int row, col;

	if (size > 0)
	{
	for (row = 0; row < size; row++)
	{
		col = 1;
		while (col < size)
		{
			if (col = size - row)
			{
				while (col < size)
					_putchar('#');
				col++;
				break;
			}
			_putchar(' ');
			col++;
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
