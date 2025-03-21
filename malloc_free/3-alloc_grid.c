#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates 2d array with size of the 2 int parameters
 * @width: int value represents the width size.
 * @height: int vslue represents the height size.
 *
 * Return: pointer of a 2d array - NULL on failure or if one parameter is
 * <= 0.
 */
int **alloc_grid(int width, int height)
{
	/* Declare required variables */
	int **grid_arr;
	int i;

	/* checks if any parameter is <= 0 */
	if (width <= 0 || height <= 0)
		return (0);

	/* malloc 1d array for height and check if it fails */
	grid_arr = malloc(sizeof(int *) * height);
	if (!grid_arr)
		return (0);

	/* malloc 1d array for every width by height and check if it fails */
	for (i = 0; i < height; i++)
	{
		grid_arr[i] = malloc(sizeof(int) * width);
		if (!grid_arr[i])
		{
			for (; i >= 0; i--)
			{
				free(grid_arr[i]);
			}
			free(grid_arr);
			return (0);
		}
	}

	/* return 2d array pointer */
	return (grid_arr);
}
