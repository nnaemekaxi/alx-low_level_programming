#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int x;
	int add_a = 0;
	int add_b = 0;

	for (x = 0; x < size; x++)
	{
		add_a = add_a + a[x];
		add_b = add_b + a[size - x - 1];
		a = a + size;
	}
	printf("%d, ", add_a);
	printf("%d\n", add_b);
}

