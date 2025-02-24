#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 (3 times)
 * followed by new line.
 *
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			 if (b > 0)
			 {
				 _putchar(49);
			 }
			 _putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
