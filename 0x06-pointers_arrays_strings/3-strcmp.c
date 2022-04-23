#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are equal, y if not
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	while (s1[x] != '\0' && y == 0)
	{
		y = s1[x] - s2[x];
		x++;
	}
	return (y);
}

