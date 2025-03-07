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
	int i = 0;
	while(1)
	{
		if(s[i] == c)
		{
			s++;
			return(s);
		} else if (s[i] == 0)
		{
			return (NULL);
		}
		s++;
		i++;
	}
}
