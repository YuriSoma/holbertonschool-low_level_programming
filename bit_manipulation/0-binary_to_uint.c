#include "main.h"

/**
 * binary_to_uint - converts passed binary to unsigned int.
 * @b: binary number as a string.
 *
 * Return: converted unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit, result;
	int len;

	while (b[len] != '\0')
	{
		len++;
	}
	len--;
	digit = 1, result = 0;
	for (; len >= 0; len--)
	{
		if (b[len] == '1')
			result += digit;
		else if (b[len] != '0')
			return (0);
		digit *= 2;
	}

	return (result);
}
