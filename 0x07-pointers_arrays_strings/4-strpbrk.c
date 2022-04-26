#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
	    x = 0;
		while (accept[x])
		{
		if (*s == accept[x])
		return (s);
		x++;
		}
	s++;
	}

return ('\0');
}
