#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free all previously allocated addresses
 * @grid: returned addresses of the previously allocation.
 * @height: int value represents the height size.
 *
 */
void free_grid(int **grid, int height)
{
	/* declear i for the iteration */
	int i;

	/* iterate through the grid array and free every addres */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
