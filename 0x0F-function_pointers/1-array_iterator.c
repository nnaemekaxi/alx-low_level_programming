#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: is pointer to int
 * @action: is a pointer to the function
 * @size: is the size of the array
 *
 * Return: Nothing.
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	x = 0;
	while (x < size)
	{
		action(array[x]);
	x++;
	}
}

