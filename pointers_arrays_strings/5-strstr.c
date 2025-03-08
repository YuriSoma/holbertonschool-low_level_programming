#include "main.h"

/**
 * _strstr - searches *haystack for *needle
 * @haystack: string to search in
 * @needle: string to match in *haystack
 *
 * Return: retuns *haystack starts from *needle till the end or returns
 * original *haystack if *needle is empty
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, y;

	if (needle[0] == '\0')
		return (haystack);
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
					haystack += i;
					return (haystack);
				}
				x++;
			}
		}
	}
	return (0);
}
