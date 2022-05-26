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
	listint_t *_head;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;

	head_node = new->n;

	_head = new->next;

	free(new);

	*head = _head;

	return (head_node);
}
