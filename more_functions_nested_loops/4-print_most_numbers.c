#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9 (not 2 or 4)
 * followed by new line.
 *
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
