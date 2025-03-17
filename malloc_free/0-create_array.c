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
	if (size == 0)
		return (0);
	char *init_arr = (char *) malloc(size * sizeof(char));
	init_arr = c;
	if (!init_arr)
		return (0);
	return (init_arr);
}
