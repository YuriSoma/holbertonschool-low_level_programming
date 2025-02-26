#include "main.h"

/**
 * print_triangle - prints triangle as passing size.
 * @size: the size of the triangle.
 *
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
		b = 0;
		while (b < size)
		{
			if (b == a)
			{
				while (b < size)
				{
					_putchar('#');
					b++
				}
				break;
			}
			else
			{
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
