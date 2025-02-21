#include <ctype.h>

/**
 * _isalpha - checks if the character is an alpha
 * @c: The character to be check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isalpha(int c)
{
	int r = isalpha(c);

	if (r == 0)
		return (0);
	return (1);
}
