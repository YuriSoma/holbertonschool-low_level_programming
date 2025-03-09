#include "main.h"

/**
 * _pow_recursion - calculate x pow y using recursion function
 * @x: the base number
 * @y: the exponent
 *
 * Return: result of x pow y or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(y - 1));
}
