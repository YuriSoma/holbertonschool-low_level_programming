#include "main.h"

/**
 * swap_int - swaping 2 values, by holding the value of one of them in c then
 * them makes the swaping between a nd b.
 * @a: pointer to a value
 * @b: pointer to b value
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
