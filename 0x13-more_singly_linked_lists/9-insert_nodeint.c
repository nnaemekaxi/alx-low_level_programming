#include "lists.h"

/**
 * insert_nodeint_at_index - main function
 * @head: The address of pointer to first node.
 * @idx: The index to insert new node.
 * @n: The integrer value of new node.
 *
 * Description: This function inserts a new node at a given position.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *list;
	unsigned int x = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	list = *head;

	while (list)
	{
		if (x == (idx - 1))
		{
			new_node->next = list->next;
			list->next = new_node;
			return (new_node);
		}
		x++;
		list = list->next;
	}
	free(new_node);
	return (NULL);
}
