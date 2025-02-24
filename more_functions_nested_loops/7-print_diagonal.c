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
			for (c = 1; c <= b; c++)
				_putchar(' ');
			b++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
