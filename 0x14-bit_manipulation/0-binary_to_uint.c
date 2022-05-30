#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: string to input
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int num = 0;

	if (!b)
		return (0);

	x = 0;
	while (b[x] != '\0')
	{
		num <<= 1;
		if (b[x] == '1')
			num += 1;
		else
		{
			if (b[x] != '0' && b[x] != '1')
				return (0);
		}
		x++;
	}
	return (num);
}
