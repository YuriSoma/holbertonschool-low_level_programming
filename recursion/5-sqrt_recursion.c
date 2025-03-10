#include "main.h"

/**
 * rtroot - divide x by y and checks if result equals y - if not increse y by 1
 * and try again recursively.
 * @x: given to finds its root.
 * @y: starter number with value 1.
 *
 * Return: y if y is the same result of x / y - or -1 if not or x has no root> 
 */
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

/**
 * _sqrt_recursion - finds the square root of a given number.
 * @n: the given number to finds its square root.
 *
 * Return: square root of n or -1 if n has no root.
 */
int _sqrt_recursion(int n)
{
	int i;

	i = return (rtroot(n, 1.0));
	return (i);
}
