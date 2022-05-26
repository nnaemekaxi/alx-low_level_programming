#include "lists.h"

/**
 * pop_listint - function deletes the head node of
 * a linked list
 * @head: pointer to head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *header;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	head_node = curr->n;

	header = curr->next;

	free(curr);

	*head = header;

	return (head_node);
}
