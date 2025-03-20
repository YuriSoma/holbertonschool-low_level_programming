#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates 2 strings, if a string passed as NULL
 * will be treated as empty string.
 * @s1: first string
 * @s2: second string
 *
 * Return: New pointer of the result of the concatenation, or NULL on fail.
 */
char *str_concat(char *s1, char *s2)
{
	/* needed variables declaration */
	int len = 0, i = 0, x = 0;
	char *conc_str;
	/* count length of both strings */
	if (s1)
	{
		while (s1[i] != '\0')
		{
			len++;
			i++;
		}
	}
	else
		s1 = "";
	i = 0;
	if (s2)
	{
		while (s2[i] != '\0')
		{
			len++;
			i++;
		}
	}
	else
		s2 = "";
	/* malloc */
	conc_str = malloc(sizeof(char) * (len + 1));
	if (!conc_str)
		return (0);
	/* fill both strings to the newly allocated address */
	i = 0;
	while (s1[i] != '\0')
	{
		conc_str[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		conc_str[i] = s2[x];
		x++;
		i++;
	}
	/* add NULL terminator to the end of the concatenated string*/
	conc_str[i] = '\0';
	/* return the newly pointer or NULL if allocation failed*/
	return (conc_str);
}
