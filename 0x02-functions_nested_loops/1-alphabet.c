#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function prints alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
