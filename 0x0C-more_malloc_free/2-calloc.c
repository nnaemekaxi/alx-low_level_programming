#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	x = 0;
	while (x < (nmemb * size))
	{
		ptr[x] = 0;
	x++;
	}
	return (ptr);
}
