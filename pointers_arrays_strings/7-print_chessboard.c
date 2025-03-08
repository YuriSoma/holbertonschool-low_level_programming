#include "main.h"

/**
 * print_chessboard - prints chessboard using 2d array
 * @a: 2d array 8 by 8
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
