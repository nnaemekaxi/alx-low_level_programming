#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer.
 *
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar(45);
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + 48);
}

