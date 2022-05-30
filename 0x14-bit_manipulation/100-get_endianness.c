#include "main.h"

/**
* get_endianness - function check the endianness.
*
* Return: return 1 if little endian and 0 for big endian.
**/

int get_endianness(void)
{
	unsigned int x = 1;

	char *ch = (char *) &x;

	return (*ch);
}
