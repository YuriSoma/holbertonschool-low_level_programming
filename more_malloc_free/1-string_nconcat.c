#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates first string with n bytes of second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: Pointer of the result of the concatenation, or NULL on fauiler.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_n;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	conc_n = malloc(sizeof(char) * (len + 1));
	if (conc_n == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		conc_n[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		conc_n[len++] = s2[i];
	conc_n[len] = '\0';

	return (conc_n);
}
