#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	char alph = 'a';
	int x;

	x = 0;
	while (x <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);

		}
		putchar('\n');
		x++;
	}
}

