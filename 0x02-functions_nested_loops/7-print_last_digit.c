#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n:  is the int that will use for the argument of the function
 * Return: integer value
 */

int print_last_digit(int n)
{
	int last_dgt;

	last_dgt = n % 10;

	if (last_dgt < 0)
		last_dgt = last * -1;

	_putchar(last_dgt + '0');

	return (last_dgt);
}
