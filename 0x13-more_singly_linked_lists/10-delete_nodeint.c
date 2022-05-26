#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the
 * node at index index of a list
 * @head: pointer to first node.
 * @index: The index to delete the node.
 *
 * Description: This function deletes the node at index index of
 * a listint_t linked list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *header;
	unsigned int iter = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	if (!index)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
		return (1);
	}

	list = *head;

	while (list)
	{
		if (iter == index)
		{
			header->next = list->next;
			free(list);
			return (1);
		}
		iter++;
		header = list;
		list = list->next;
	}
	return (-1);
}
