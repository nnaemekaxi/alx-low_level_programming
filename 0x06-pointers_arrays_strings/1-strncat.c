#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter 'string'
 * @src: input parameter 'string'
 * @n: iteration variable
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != 0)
	{
		x++;
	}
	y = 0;
	while (src[y] != 0 && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
