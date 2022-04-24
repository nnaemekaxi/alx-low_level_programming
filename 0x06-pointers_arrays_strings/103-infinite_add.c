#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 *
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, xx = 0, y, yy, z, zz, a = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + xx) != '\0')
		xx++;
	if (x >= xx)
		yy = x;
	else
		yy = xx;
	if (size_r <= yy + 1)
		return (0);
	r[yy + 1] = '\0';
	x--, xx--, size_r--;
	z = *(n1 + x) - 48, zz = *(n2 + xx) - 48;
	while (yy >= 0)
	{
		y = z + zz + a;
		if (y >= 10)
			a = y / 10;
		else
			a = 0;
		if (y > 0)
		*(r + yy) = (y % 10) + 48;
		else
			*(r + yy) = '0';
		if (x > 0)
			x--, z = *(n1 + x) - 48;
		else
			z = 0;
		if (xx > 0)
			xx--, zz = *(n2 + xx) - 48;
		else
			zz = 0;
		yy--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

