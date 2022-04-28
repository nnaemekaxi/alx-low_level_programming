#include "main.h"

/**
 * prime_x - function to check the code
 * @x: number
 * @y: number of primer
 * Return: Always 0.
 */

int prime_x(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
		else if (x == y)
	{
		return (1);
	}
	return (prime_x(x, y + 1));
}


/**
 * is_prime_number - main - check the code
 * @n: number
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (prime_x(n, 2));
}
