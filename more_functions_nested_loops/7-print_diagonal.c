#include "main.h"

/**
 * print_line - prints lines, n times.
 * @n: the number of printing times.
 *
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = n; a > 0; a--)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
