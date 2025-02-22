#include "main.h"

/**
 * times_table - prints tale 9
 *
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar((x * y) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
