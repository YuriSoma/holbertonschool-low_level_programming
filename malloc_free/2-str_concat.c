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
	int len = 0, i = 0;
	char *conc_str;

	/* counts the length */
	int len = 0, i = 0;
	while (s1[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		len++;
		i++;
	}

	/* malloc */
	conc_str = malloc(sizeof(char) * (len + 1));

	/* fill both strings to the newly allocated address */
	i = 0;
	while (s1[i] != '\0')
        {
                conc_str[i] = s1[i];
		i++;
        }
        i--;
        while (s2[i] != '\0')
        {
		conc_str[i] = s2[i];
		i++;
        }

	/* add NULL terminator to the end of the concatenated string*/
	conc_str[i] = '\0';
}
