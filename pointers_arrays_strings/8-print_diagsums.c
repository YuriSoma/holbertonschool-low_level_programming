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
	int i, sum1, sum2;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d", sum1, sum2);
}
