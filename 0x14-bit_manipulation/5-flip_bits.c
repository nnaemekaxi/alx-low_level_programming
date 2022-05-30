#include "main.h"

/**
* flip_bits - function sets bit to 0 at given index.
* @n: is unsigned long int
* @m: is an unsigned int
*
* Return: return 1 when bit is 1 else 0.
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit1 = 0;
	unsigned long int bit2 = n ^ m;

	while (bit2)
	{
		bit1 += (bit2 & 1);
		(bit2 >>= 1);
	}
	return (bit1);
}
