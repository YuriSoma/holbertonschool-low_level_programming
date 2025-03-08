#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: address of string to be printed
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	_puts_recursion(++s);
}
