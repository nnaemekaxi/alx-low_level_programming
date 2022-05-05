#include "main.h"
#include <stdlib.h>
/**
  *_strdup - function returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int x;
	unsigned int y;

	/* to check if str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	nstr = malloc(sizeof(char) * (x + 1));

	/*to check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < x; y++)
	{
		nstr[y] = str[y];
	}
	nstr[x] = '\0';
	return (nstr);

}
