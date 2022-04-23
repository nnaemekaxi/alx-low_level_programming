#include "main.h"

/**
 * string_toupper - changes lowercase string to uppercase
 * @str: string to be changed
 *
 * Return: the result of the change
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
	}
	return (str);
}

