#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - use free function on previous grid
 * @grid: two dimensional array to free
 * @height: input height (size)
 *
 * Return: free'd grid
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL || height != 0)
	{
		x = 0;
		while (x < height)
		{
			free(grid[x]);
		x++;
		}
		free(grid);
	}
}
