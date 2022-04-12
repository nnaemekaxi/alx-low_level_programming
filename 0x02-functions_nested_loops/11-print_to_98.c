#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 */

void print_to_98(int n)
{

if (n < 98)
{
	for (n = n; n < 98; n++)
		printf("%d, ", n);
		print("%d\n", 98);
}
if (n > 98)
{
	for (n = n; n > 98; n--)
		printf("%d, ", n);
		printf("%d\n", 98);
}
}

