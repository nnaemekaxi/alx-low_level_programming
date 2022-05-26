#include "lists.h"

/**
 * reverse_listint - function reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *num;

	ptr = NULL;
	num = NULL;

	while (*head != NULL)
	{
		num = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = num;
	}

	*head = ptr;
	return (*head);
}
