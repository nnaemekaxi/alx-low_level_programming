#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, x, y, z;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (x = z = 0; x < height; x++)
	{
		for (c = z; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				z++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[x] = malloc((c - z + 2) * sizeof(char));
				if (aout[x] == NULL)
				{
					ch_free_grid(aout, x);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; z <= c; z++, y++)
			aout[x][y] = str[z];
		aout[x][y] = '\0';
	}
	aout[x] = NULL;
	return (aout);
}
