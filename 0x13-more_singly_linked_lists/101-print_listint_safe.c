#include "lists.h"

/**
 * free_listp - function frees a linked list
 * @head: pointer to head of a list.
 *
 * Return: no return.
 */

void free_listp(listp_t **head)
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
 * print_listint_safe - function prints a linked list.
 * @head: pointer to head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t new_nodes = 0;
	listp_t *headerptr, *new, *add;

	headerptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = headerptr;
		headerptr = new;

		add = headerptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headerptr);
				return (new_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		new_nodes++;
	}

	free_listp(&headerptr);
	return (new_nodes);
}
