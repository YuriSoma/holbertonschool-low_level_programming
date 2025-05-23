#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to create an array initilized with c using malloc.
 * @size: size of the array
 * @c: character that the array initilized with.
 *
 * Return: 0 on failure or if size equals 0 otherwise returns the pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *init_arr;

	if (size == 0)
		return (0);
	init_arr = malloc(size * sizeof(char));
	if (!init_arr)
		return (0);
	while (i < size)
	{
		init_arr[i] = c;
		i++;
	}
	return (init_arr);
}
