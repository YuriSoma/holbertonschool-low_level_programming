#include "main.h"

/**
 * _strlen_recursion - counts a string len
 * @s: string to count its len
 *
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0] != '\0')
	{
		return (_strlen_recursion(s + 1) + len + 1);
	}

}
