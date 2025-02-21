#include <ctype.h>

/**
 * _islower - checks if a character is lowercase or not
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return(0);
}
