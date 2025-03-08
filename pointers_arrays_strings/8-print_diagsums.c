#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calculate the sum of the two diagonals
 * @a: 2d array address
 * @size: the 2d array square size
 *
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, x, sum1, sum2, usize;

	usize = size;
	for (i = 0; i < usize * usize; i += usize + 1)
	{
		sum1 += a[i];
	}
	for (x = usize - 1; x < usize * usize - 1; x += usize - 1)
	{
		sum2 += a[x];
	}
	printf("%d, %d\n", sum1, sum2);
}
