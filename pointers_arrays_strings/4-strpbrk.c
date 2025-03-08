#include "main.h"

/**
 * _strpbrk - searches accept for first match char in s
 * @s: the string has the match char
 * @accept: string to be searched
 *
 * Return: retuns s with address from the matched char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; s++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				return (s);
			}
		}
	}
	return (0);
}
