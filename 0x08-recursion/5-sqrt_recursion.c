#include "main.h"

/**
 * sqrt_x - main - check the code
 * @x: number
 * @y: number of index
 * Return: Always 0.
 */

int sqrt_x(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_x(x, y + 1));
}

/**
 * _sqrt_recursion - main - check the code
 * @n: number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_x(n, 0));
}
