#include "main.h"

/**
 * cap_string - changes firstletter to uppercase
 * @str: string to work on
 *
 * Return: changes letter to uppercase
 */

char *cap_string(char *str)
{
	int x;
	int y;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x == 0 && str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
		for (y = 0; c[y] != '\0'; y++)
		{
			if (c[y] == str[x] && str[x + 1] >= 97 && str[x + 1] <= 122)
			{
				str[x + 1] = str[x + 1] - 32;
			}
		}
	}
	return (str);
}
