#include "main.h"

/**
 *_memset - function fills the first
 *@s: starting address of memory to be filled
 *@b: the desired value
 *@n: bytes of the memory area pointed to
 *
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	while (n > 0)
	{
		s[x] = b;
		n--;
		x++;
	}
	return (s);
}
