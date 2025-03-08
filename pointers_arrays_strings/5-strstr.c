#include "main.h"

/**
 * _strpbrk - searches accept for first match char in s
 * @s: the string has the match char
 * @accept: string to be searched
 *
 * Return: retuns s with address from the matched char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, y;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			y = 0;
			for (x = i; needle[y] != '\0'; y++)
			{
				if (haystack[x] != needle[y])
				{
					break;
				}
				if (needle[y + 1] == '\0')
				{
					return (needle);
				}
				x++;
			}

		}
	}
	return (0);
}
