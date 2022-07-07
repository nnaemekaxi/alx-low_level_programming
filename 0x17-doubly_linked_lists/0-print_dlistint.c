#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list
 * @h: Head of the linked list
 *
 * Return: Number of nodes (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (x);
}
