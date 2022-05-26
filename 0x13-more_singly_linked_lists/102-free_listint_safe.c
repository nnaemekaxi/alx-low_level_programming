#include "lists.h"

/**
 * free_listp2 - function frees a linked list
 * @head: pointer to head of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *bin;
	listp_t *new;

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

/**
 * free_listint_safe - function frees a linked list.
 * @h: pointer to head of a list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t new_nodes = 0;
	listp_t *headerptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = headerptr;
		headerptr = new;

		add = headerptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&headerptr);
				return (new_nodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		new_nodes++;
	}

	*h = NULL;
	free_listp2(&headerptr);
	return (new_nodes);
}
