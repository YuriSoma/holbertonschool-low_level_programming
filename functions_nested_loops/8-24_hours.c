#include "main.h"

/**
 * jack_bauer - counts Jack's day.
 *
 * 
 */
void jack_bauer(void)
{
	int i, x;

	for (i = 0; i <= 23; i++)
	{
		for (x = 0; x <= 59; x++)
		{
			if (i <= 9)
			{
				if (x <= 9)
				{
					_putchar('0');
					_putchar(i);
					_putchar(':');
					_putchar('0');
                                        _putchar(x);
					_putchar('\n');
				}
				else
				{
					_putchar('0');
					_putchar(i);
					_putchar(':');
					_putchar(x);
					_putchar('\n');
				}
			}
			else
			{
				if (x <= 9)
				{
					_putchar(i);
					_putchar(':');
					_putchar('0');
					_putchar(x);
					_putchar('\n');
				}
				else
				{
					_putchar(i);
					_putchar(':');
					_putchar(x);
					_putchar('\n');
				}
			}
		}
	}
}
