#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to create an array initilized with c using malloc.
 * @size: size of the array
 * @c: character that the array initilized with.
 *
 * Return: 0 on failure or if size equals 0 otherwise returns the pointer.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(sizeof(str) * i);
	if (!p)
		return (0);
	i = 0;
	while (str[i] != '\0')
        {
                p[i] = str[i];
		i++;
        }
	return (p);
}
