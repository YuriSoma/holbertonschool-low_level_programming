#include "main.h"

/**
 * *_strchr - to locate c in *s then return it started from c
 * @s: the string
 * @c: letter to be located
 *
 * Return: s after locating c.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s+i);
		}

	}
}
