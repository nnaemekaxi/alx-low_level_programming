#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head of a list.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *bin;

	while ((bin = head) != NULL)
	{
		head = head->next;
		free(bin);
	}
}
