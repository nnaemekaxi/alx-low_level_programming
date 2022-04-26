#include "main.h"
/**
 *_memcpy - function copies n bytes from memory area
 *@dest: memory where is stored
 *@src: memory where is copied from
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int i = n;

	for (x = 0; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
