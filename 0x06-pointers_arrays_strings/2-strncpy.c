#include "main.h"

/**
 * _strncpy - this copies the string
 * @dest: is an array
 * @src: is a pointer
 * @n: itiration variable
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (x = x; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

