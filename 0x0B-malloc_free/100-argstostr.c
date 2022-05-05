#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int z = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
