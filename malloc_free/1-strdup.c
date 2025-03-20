#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Allocates a space on memory with a duplicate of str
 * @str: passed string to be duplicated
 *
 * Return: 0 if str is NULL or if allocation failed, or new pointer on success.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dup;

	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
