#include "main.h"

/**
 * *_memcpy - to copy memory area
 * @dest: the memory area destenation
 * @src: the memory area source
 * @n: the limit of the memory area copy
 *
 * Return: the array s after setting
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
