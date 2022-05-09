#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers based on range
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int x;
	int y;
	int *ptr;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	ptr = malloc(sizeof(int) * y);
	if (ptr == NULL)
		return (NULL);
	x = 0;
	while (x < y)
	{
		ptr[x] = min;
	x++;
	min++;
	}
	return (ptr);
}
