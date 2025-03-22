#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of allocation.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *alloc_mem = malloc(b);

	if (alloc_mem == NULL)
		exit(98);

	return (alloc_mem);
}
