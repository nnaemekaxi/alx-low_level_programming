#include "lists.h"

/**
 * free_listint2 - function frees a linked list
 * @head: pointer to head of a list.
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *bin;
	listint_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((bin = new) != NULL)
		{
			new = new->next;
			free(bin);
		}
		*head = NULL;
	}
}
