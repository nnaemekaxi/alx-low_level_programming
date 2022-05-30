#include "main.h"

/**
* clear_bit - function sets bit to 0 at given index.
* @n: is unsigned long int
* @index: is an unsigned int
*
* Return: return 1 when bit is 1 else 0.
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0;

	if (index > (sizeof(index) * 8))
		return (-1);

	num = (1 << index);
	*n = *n & ~num;
	return (1);
}
