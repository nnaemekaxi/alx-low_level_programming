#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	va_start(valist, n);

	x = 0;
	while (x < n)
	{
		printf("%d", va_arg(valist, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	x++;
	}

	printf("\n");
	va_end(valist);
}
