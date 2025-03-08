#include "main.h"

/**
 * _print_rev_recursion - prints string using recursion in reverse
 * @s: address of string to be printed reversely
 *
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar(s[0]);
	_print_rev_recursion(s++);
}
