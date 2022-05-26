#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to head of a list.
 *
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t new_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		new_nodes++;
	}
	return (new_nodes);
}
