#include "main.h"

/**
 * _strlen_recursion - counts a string len
 * @s: string to count its len
 *
 * Return: len of s, and 0 of function reach null terminator
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);

}
