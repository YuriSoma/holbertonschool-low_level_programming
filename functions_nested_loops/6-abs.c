#include "main.h"

/**
 * _abs - computes the absoulte value of an int.
 * @c: The character to be check
 *
 * Return: .
 */
int _abs(int c)
{
	int i;

	if (c > 0)
	{
		i = c;
	}
	else if (c < 0)
	{
		c = -1 * c;
		i = c;
	}
	else if (c == 0)
	{
		i = 0;
	}
	return (i);
}
