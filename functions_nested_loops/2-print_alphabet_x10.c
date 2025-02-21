#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - print all alphabets
 *
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
