#include "main.h"

/**
 * leet - encodes a string
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int x;
	int y;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; c[y] != '\0'; y++)
		{
			if (str[x] == c[y])
			{
				str[x] = n[y];
			}
		}
	}
	return (str);
}
