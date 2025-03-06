#include "main.h"

/**
 * *_memset - sets to buffer a constant byte b
 * @s: char array contans the buffer
 * @b: the constant byte to be sets
 * @n: the limits b will be filled
 *
 * Return: the array s after setting
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
