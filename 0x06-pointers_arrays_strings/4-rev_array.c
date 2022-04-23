#include "main.h"

/**
 * reverse_array - function reverses array
 * @a: an array
 * @n: array index
 *
 */

void reverse_array(int *a, int n)
{
	int x;
	int temp;

	x = 0;
	n = n - 1;
	while (x < n)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		x++;
		n--;
	}
}

