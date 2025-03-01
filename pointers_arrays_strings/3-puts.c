#include "main.h"

/**
 * _puts - prints string char by char to std (like the standard puts)
 * @str: string array of chars.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
