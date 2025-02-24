#include "main.h"

/**
 * print_diagonal - prints \ with space in new line, n times.
 * @n: the number of printing times.
 *
 */
void print_diagonal(int n)
{
	int a, b = 0, c;

	if (n > 0)
	{
		for (a = n; a > 0; a--)
		{
			_putchar('\\');
			_putchar('\n');
			b++;
			for (c = 0; c <= b; c++)
				_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
