#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: address of string to be printed
 *
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] < '\0'; i++)
		_putchar(s[i]);
}
