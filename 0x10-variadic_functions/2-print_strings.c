#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varied_list;
	unsigned int x;
	char *str;

	va_start(varied_list, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(varied_list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(varied_list);
}
