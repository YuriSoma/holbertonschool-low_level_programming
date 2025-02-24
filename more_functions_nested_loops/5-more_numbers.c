#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 (3 times)
 * followed by new line.
 *
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
		if (a == 57){
			for (b = 48; b <= 52; b++)
			{
				_putchar(b + '1');
			}
			_putchar('\n');
		}
	}
}
