#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: Name passed
 * @size: Number of iterations
 * @cmp: Points to a function
 * Return: Returns nothing
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}

	return (-1);
}
