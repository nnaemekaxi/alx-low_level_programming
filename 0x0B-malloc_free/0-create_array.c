#include "main.h"
#include <stdlib.h>
/**
  *create_array - fuction that creates an array of 
  *chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	/* to check if malloc was a success */

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	return (array);

}
