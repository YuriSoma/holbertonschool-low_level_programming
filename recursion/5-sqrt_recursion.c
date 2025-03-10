#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a given number.
 * @n: the given number to finds its square root.
 *
 * Return: square root of n or -1 if n has no root.
 */
int _sqrt_recursion(int n)
{
	int i;
	int rtroot(float x, float y)
	{
		if (x / y == y)
		{
			return (y);
		}
		else if (y >= x)
		{
			return (-1);
		}
		rtroot(x, y + 1.0);
	}

	i = return rtroot(n, 1.0);
	return (i);
}
