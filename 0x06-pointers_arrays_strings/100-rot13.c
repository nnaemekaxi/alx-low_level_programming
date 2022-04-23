#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string.
 * Return: str
 */

char *rot13(char *str)
{
	int x;
	int y;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; letters[y] != '\0'; y++)
		{
			if (str[x] == letters[x])
			{
				str[x] = rot13[x];
				break;
			}
		}
	}

	return (str);
}
